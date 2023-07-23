#include<stdio.h>
int main() {
    int a;
    int b;
    int c;
    printf("enter the length of a\t");
    scanf("%d",&a);
    printf("enter the length of b\t");
    scanf("%d",&b);
    printf("enter the length of c\t");
    scanf("%d",&c);
    if(a==b==c){
        printf("YOUR TRIANGLE IS EQUILATERAL TRIANGLE");

    }
    
    else if(a==b && a!=c && b!=c){
         printf("YOUR TRIANGLE IS ISOSCELES TRIANGLE");

    }
   
    else if(a!=b && a!=c && b!=c) {
        printf("YOUR TRIANGLE IS SCALENE TRIANGLE");

    }
    else{
        printf("PLEASE CHECK THE VALUES !!");

    }
   
    return 0;



}