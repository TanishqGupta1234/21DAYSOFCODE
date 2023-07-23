#include<stdio.h>
int arraysorted(int arr[],int n){
    if(n==1||n==0)
    return 1;
    if(arr[n-1]<arr[n-2])
    return 0;
    return arraysorted(arr,n-1)

}
int main() {
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    if(arraysorted(arr,n)){
        printf("YES");

    }
    else{
        printf("NO");
        
    }
}