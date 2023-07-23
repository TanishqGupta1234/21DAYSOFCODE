#include<stdio.h>
int counlines(const char *filename) {
    FILE *file=fopen(filename,"r");
    if(file==NULL) {
        printf("error opening the file");
        return -1;

    }


int linecount=0;
char ch;

while((ch = fgetc(file)) != EOF) {
    if(ch=='\n') {
        linecount++;
    }
}
fclose(file);
return linecount;


}
int main() {
    const char *filename="example.txt";
    int lines=counlines(filename);
    if(lines>=0) {
        printf("number of lines in the file: %d",lines);


    }
    return 0;
}