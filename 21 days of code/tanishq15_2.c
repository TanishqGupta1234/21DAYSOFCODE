#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows1, cols1, rows2, cols2;

    // Get the dimensions of the first matrix from the user
    printf("Enter the number of rows for matrix 1: ");
    scanf("%d", &rows1);
    printf("Enter the number of columns for matrix 1: ");
    scanf("%d", &cols1);

    // Get the dimensions of the second matrix from the user
    printf("Enter the number of rows for matrix 2: ");
    scanf("%d", &rows2);
    printf("Enter the number of columns for matrix 2: ");
    scanf("%d", &cols2);

    // Check if the matrices can be multiplied
    if (cols1 != rows2) {
        printf("Error: The number of columns in matrix 1 must be equal to the number of rows in matrix 2 for matrix multiplication.\n");
        return 1;
    }

    // Dynamically allocate memory for the matrices
    int** matrix1 = (int**)malloc(rows1 * sizeof(int*));
    int** matrix2 = (int**)malloc(rows2 * sizeof(int*));
    int** result = (int**)malloc(rows1 * sizeof(int*));

    for (int i = 0; i < rows1; ++i) {
        matrix1[i] = (int*)malloc(cols1 * sizeof(int));
    }

    for (int i = 0; i < rows2; ++i) {
        matrix2[i] = (int*)malloc(cols2 * sizeof(int));
    }

    for (int i = 0; i < rows1; ++i) {
        result[i] = (int*)malloc(cols2 * sizeof(int));
    }

    // Get the values for the first matrix from the user
    printf("Enter the elements of matrix 1:\n");
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols1; ++j) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Get the values for the second matrix from the user
    printf("Enter the elements of matrix 2:\n");
    for (int i = 0; i < rows2; ++i) {
        for (int j = 0; j < cols2; ++j) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print the result matrix
    printf("Result:\n");
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    // Free the dynamically allocated memory
    for (int i = 0; i < rows1; ++i) {
        free(matrix1[i]);
    }
    free(matrix1);

    for (int i = 0; i < rows2; ++i) {
        free(matrix2[i]);
    }
    free(matrix2);

    for (int i = 0; i < rows1; ++i) {
        free(result[i]);
    }
    free(result);

    return 0;
}
