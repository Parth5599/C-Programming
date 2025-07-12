#include<stdio.h>

void Namaste();
void Bonjour();

int main(){
    printf("Enter F For France And I For Indian");
    char ch;
    scanf("%c",&ch);

    if (ch=='i')
    {
        Namaste();
    }
    else{
        Bonjour();
    }
    

    return 0;
}

void Namaste(){
    printf ("Namaste ...\n");
}

void Bonjour(){
    printf ("Bonjour...!\n");
}