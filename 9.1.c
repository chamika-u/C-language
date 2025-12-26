// To check whether number is a positive, negative or zero.

#include <stdio.h>
#include <stdbool.h>

int main() {

    // variable declaration
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    // check if the number is positive, negative or zero
    if (number > 0) {
        printf("The number %d is positive.\n", number);
    } 
    else if (number < 0) {
        printf("The number %d is negative.\n", number);
    } 
    else {
        printf("The number is zero.\n");
    }
}