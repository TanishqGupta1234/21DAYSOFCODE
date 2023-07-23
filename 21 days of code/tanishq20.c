#include<stdio.h>
void swap(int *ptr1, int *ptr2) {
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}
int main() 
{
    int num1,num2;
    printf("ENTER VALUE OF NUM1");
    scanf("%d",&num1);
    printf("ENTER VALUE OF NUM2");
    scanf("%d",&num2);



    printf("BEFORE SWAPPING\n");
    printf("num1=%d\n",num1);
    printf("num2=%d\n",num2);
    swap(&num1,&num2);
    printf("AFTER SWAPPPING\n");
    printf("num1=%d\n",num1);
    printf("num2=%d\n",num2);
    return 0;
}