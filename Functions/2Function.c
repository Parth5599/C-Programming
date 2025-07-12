#include <stdio.h>

void Hello();
void Goodbye();

int main() {
    Hello(); // Call the Hello function
    Goodbye(); // Call the Goodbye function
    return 0; // Return 0 to indicate successful execution
}

void Hello() {
    printf("Hello\n"); // Print a greeting message
}

void Goodbye() {
    printf("Goodbye :)\n"); // Print a farewell message
}