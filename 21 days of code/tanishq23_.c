#include<stdio.h>
int main() {
    int n, sum=0;
    printf("enter the number of elements");
    scanf("%d",&n);

    if(n<=0) {
        printf("PLEASE ENTER THE POSITIVE NUMBER");
        return 1;


    }
    int arr[n];
    printf("ENTER THE %d element",n);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        sum+=arr[i];

    }
    printf("enter the number of element :%d",sum);
    return 0;

}