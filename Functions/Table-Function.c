#include<stdio.h>

void tableprint(int n);


int main (){

    int x;
    printf("Enter The Number :");
    scanf("%d", &x);

    tableprint(x);

    return 0;
}

void tableprint(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n",n,i,i*n);
    }
    
}