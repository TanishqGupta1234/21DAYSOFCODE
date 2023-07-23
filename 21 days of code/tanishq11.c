#include<stdio.h>
double calculateaverage(int arr[],int size) {
    int sum=0;

    for(int i=0;i<size;i++) {
        sum=arr[i];


    }
    double average=(double)sum/size;
    return average;
}
int main() {
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    double avg=calculateaverage(arr,size);
    printf("Average:0.2f",avg);
    return 0;

}