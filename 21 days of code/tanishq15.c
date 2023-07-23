#include<stdio.h>
int main(){
    int rows,cols;
    printf("enter the number of rows");
    scanf("%d",&rows);
    printf("Enter number of columns");
    scanf("%d",&cols);
        int** arr = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; ++i) {
        arr[i] = (int*)malloc(cols * sizeof(int));

        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                scanf("%d",arr[i][j]);

            }
        }
    int sum=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            sum+=arr[i][j];

        }
    }    
    printf("The sum of all elments is :%d\n",sum);
        for (int i = 0; i < rows; ++i) {
        free(arr[i]);
    }
    free(arr);
    
    return 0;

}
}