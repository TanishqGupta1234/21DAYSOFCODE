#include<stdio.h>
void printFab(int n){
    static int n1=0,n2=1,n3;
    if(n>0){
        n3=n2+n1;
        n1=n2;
        n2=n3;
        printf("%d",&n3);
        printFab(n-1);

    }
}
int main() {
    int n;
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Fabbionaci Series");
    scanf("%d %d",&0,1);
    printFab(n-2);
    return 0;
}