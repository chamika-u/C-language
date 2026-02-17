// Program to check whether a number is even or odd using conditional operator

#include <stdio.h>
#include <stdbool.h>

int main() {

    // variable declaration
    int number1;

    // user inputs
    printf("Enter the integer: ");
    scanf("%d", &number1);

    // check if number even or odd
    (number1 % 2 == 0) ? 
        printf("The number %d is even.\n", number1) : 
        printf("The number %d is odd.\n", number1);
    
    return 0;
}