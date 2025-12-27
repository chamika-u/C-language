// Arithmetic operations in C

#include <stdio.h>

int main() {

    // variable declaration and initialization
    int x = 69;
    int y = 96;

    // arithmetic operations
    int sum = x + y;
    int difference = y - x;
    int product = x * y;
    float quotient = (float)y / (float)x;
    int modulus = y % x;
    int incrementX = ++x; // pre-increment
    int decrementY = --y; // pre-decrement

    // printing results
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference); 
    printf("Product: %d\n", product);
    printf("Quotient: %.2f\n", quotient); // .2 for two decimal places
    printf("Modulus: %d\n", modulus);
    printf("Pre-incremented x: %d\n", incrementX);
    printf("Pre-decremented y: %d\n", decrementY);  
    
    return 0; 


}