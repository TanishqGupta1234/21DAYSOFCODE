#include<stdio.h>
void calculate_sum(int arr[][3],int rows,int cols){
        int row_sum[rows];
        int coll_sum[cols];
        for(int i=0;i<rows;i++){

            row_sum[i]=0;
        }
        for(int j=0;j<cols;j++) {
            coll_sum[j]=0;
        }
        for(int i=0;i<rows;i++){
            for(int j=0;j<rows;j++){
                row_sum[i] += arr[i][j];
                coll_sum[j] += arr[i][j];  
            }

        }
            printf("Sum of each row:\n");
            for (int i = 0; i < rows; i++) {
                printf("Row %d: %d\n", i + 1, row_sum[i]);}
            printf("sum of each col:\n");
            for(int j=0;j<cols;j++){
                printf("col %d:%d\n,j+1,col_sum[j]");

            }    
    }

int main(){
    int matrix[][3]={
        {1,2,3},
        {3,4,6},
        {6,7,8}
    };
    int row=3;
    int cols=3;
    calculate_sum(matrix,row,cols);
    return 0;

}