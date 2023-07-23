#include<stdio.h>
int main() {
    char filename[100];
    FILE *file;
    printf("ENTER THE FILE NAME TO CHECK WHETHER IF IT EXIST");
    scanf("%s",filename);
    file=fopen(filename,"r");
    if(file==NULL{
        printf("ERROR:THIS FILE "%s" DOES NOT EXIST,",filename);

    }
    else {
        printf("File '%s' exist\n",filename );
        fclose(file);
        return 0;
    }
    )

}