#include<stdio.h>

int sum(int a, int b);

int main(){
    int a;
    int b;

    printf ("Enter First Number :");
    scanf("%d", &a);
    printf("Enter Second Number :");
    scanf("%d", &b);

    int s = sum(a, b);
    
    printf ("The Total is :%d",s);
    return 0;
}

int sum(int a, int b){
    
    return a+b;
}