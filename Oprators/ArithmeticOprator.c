#include<stdio.h>

int main(){
    int a, b, ans;

    printf("Enter Value of a :");
    scanf("%d",&a);

    printf("enter Value of b :");
    scanf("%d", &b);

    // Addition
    ans = a + b;
    printf ("Addition Is : %d\n",ans);

    // Subtraction
    ans = a - b;
    printf("Subtraction Is :%d\n",ans);

    // Multiplaction
    ans = a * b;
    printf("Multiplication Is :%d\n",ans);

    // Division
    ans = a / b;
    printf("Division Is :%d\n", ans);

    // Modulus
    ans = a % b; 
    printf("Modulus Is : %d\n", ans);


    return 0;
}