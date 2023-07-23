#include<stdio.h>

    void Bubblesort(int arr[],int size){
        int i,j;
        for(i=0;i<size-1;i++){
            for(j=0;j<size-1;j++){
                if(arr[i]>arr[j-1]{
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;


                })
            }
        }

    }

int main(){
    int arr[]={64,33,64,12,45};
    int size=sizeof(arr)/sizeof(arr[0]);
    int i;
    printf("original array");
    for(i=0;i<size;i++){
        printf("%d",arr[i]);

    }
    printf("\n");
    Bubblesort(arr,size);

    printf("sorted array");
    for(i=0;i<size;i++){
        printf("%d",arr[i]);
        
    }
    printf("\n");
    


}