#include <stdio.h>

int count_even_elements(int arr[][3], int rows, int cols) {
    int count = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] % 2 == 0) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int matrix[][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {6, 7, 8}
    };
    int rows = 3;
    int cols = 3;

    int even_count = count_even_elements(matrix, rows, cols);
    printf("Number of even elements: %d\n", even_count);

    return 0;
}
