#include<stdio.h>
int main() {
    int x=10;
    int y=5;
    x ^=y ^=x^=y;

  
    printf("your number is swapped: x=%d,y=%d",x,y);
    return 0;
}