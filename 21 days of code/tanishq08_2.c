#include<stdio.h>
int main() {
    int arr[]={2,3,4,5};
    int temp=0;
    int length= sizeof (arr)/sizeof(arr[0]);
    printf("elements of original array");
    for(int i=0;i<length;i++) {
        printf("%d",arr[i]);

    }
    for(int i=0;i<length;i++){
        for(int j=0;j<length;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
        }
    }
    printf("\n");
    printf("elements sorted in ascending array");
    for(int i=0;i<length;i++) {
        printf("%d",arr[i]);
        return 0;
    }
}