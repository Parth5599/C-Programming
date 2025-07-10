#include <stdio.h>

int main (){

    int a = 20;
    int b = 30;
    int c = 15;

    if ((a > b ) && (a > c ))
    {
        printf("A is Grater To B and C");
    }
    else if((b > a) && (b > c))
    {
        printf("B is Grater To A and C");
    }
    else
    {
        printf("C is Grater To A and B");
    } 

    return 0;
}
//