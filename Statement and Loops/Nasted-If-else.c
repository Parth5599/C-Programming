#include <stdio.h>

int main (){

    int a = 20;
    int b = 30;
    int c = 40;

    if (a > b)
    {
        if (a > c){
            printf("A is Grater");
        }
        else
        {
            printf(" C is Grater");
        }
    }
    else //
    {
        if(b > a){
            if (b > c)
            {
                printf("B is Grater");
            }
            else
            {
                printf(" C is Grater");
            }
        }
    }

    return 0;
}