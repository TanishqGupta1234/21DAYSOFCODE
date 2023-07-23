#include<stdio.h>
struct Book {
    char author[100];
    char title[100];
    int publicationyear;

};
void displaybook(struct Book book)
{
    printf("title:%s",book.title);
    printf("author:%s",book.author);
    printf("publication:%d",book.publicationyear);



    
};
int main() {
    struct Book mybook;
    strcpy(mybook.title,"THE SEX LIFE");
    strcpy(mybook.author,"JONNY SINS");
    mybook.publicationyear=1969;
    displaybook(mybook);
    return 0;


}
