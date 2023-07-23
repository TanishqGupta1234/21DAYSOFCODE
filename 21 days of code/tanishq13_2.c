#include<stdio.h>
struct date {
    int date1;
    int month;
    int year;

};
void displaydate(struct date Date){
    printf("date1:%s",Date.date1);
    printf("month :%s",Date.month);
    printf("year:%s",Date.year);

};
int main() {
        struct date Date;
    strcpy(Date.date1,"6");
    strcpy(Date.month,"9");
    Date.year=1969;
    displaybook(Date);
    return 0;


}