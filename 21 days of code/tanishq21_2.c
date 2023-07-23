#include<stdio.h>
#include<stdlib.h>
int searchwords(const char *filename,const char *targetword ) {
    FILE *file=fopen(filename,"r");
    if(file==NULL) {
        printf("error opening the files");
        return -1;

    }
    int occurrences=0;
    char word[100];
    while (fscanf(file, "%s", word) != EOF) {
        if (strcmp(word, targetword) == 0) {
            occurrences++;
        }
    }

    fclose(file);
    return occurrences;
}


   
int main() {
    const char *filename="example.text";
    const char *target="search";
    int occurrences=searchwords(filename,target);

    if(occurrences>=0) {
        printf("number of occurence %sin this file: %d\n");


    }
    return 0;
}
