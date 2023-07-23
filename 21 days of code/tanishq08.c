#include<stdio.h>
#include<limits.h>
int secSmallest(int n,int arr[]);
{
    int smallest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<smallest)
        smallest=arr[i];

    }
    int sec_smallest=int_max;
    for(int i=0;i<n;i++){
                if(arr[i] != smallest && arr[i] < sec_smallest)
            sec_smallest = arr[i];
    }
    return sec_smallest;
}
    int main(){
        int arr[]={70,40,20,30,80,90};
        int len=sizeof(arr)/sizeof(arr[0]);
        printf("The 2nd smallest : %d",secSmallest(arr, len));
    }
}