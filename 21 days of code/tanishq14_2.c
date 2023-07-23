#include<stdio.h>
enum color {
    Red,
    blue,
    green,
    voilet,

};
int main(){
    int favouritecolor;
    printf("Enter your favorite color");
    printf("0-RED\n");
    printf('1-blue\n');
    printf("2-green\n");
    printf("3-voilet\n");
    printf("%d",&favouritecolor);

    switch (favouritecolor)
    {
    case Red :
        printf("YOUR FACORITE COLOR IS RED");
        break;
    case blue:
        printf("YOUR FAVORITE COLOR IS BLUE");
        break;
    case green:
        printf("YOUR FAVOURITE COLOR IS GREEN");
        break;
    case voilet:
        printf("YOUR FAVOURITE COLOR IS ");
        break;

    
    default:
    printf("INVALID COLOR");
        break;
    }
}