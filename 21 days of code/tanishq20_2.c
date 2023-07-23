#include<stdio.h>
#include<stdlib.h>
void strconcat(char *dest,const char *src) {
    while(*dest) {
        dest ++;
    }
    while(*src){
        *dest=*src;
        dest++;
        src++;

    }
    *dest='\O';

}
int main() {
    char str1[50],str2[50];
    printf("Enter the string 1");
    scanf("%s",str1);
    printf("Enter the string 2");
    scanf("%s",str2);
    strconcat(str1,str2);
    printf("\nConcatetated strings:%s"\n);

    return 0;
}