// function calling in main before defining the function

#include <stdio.h>
int AdditionofTwoNumbers(int a, int b); // Function prototype

int main() {
    int a, b, sum;

    // Calling the function with user input
    printf("Input first number: ");
    scanf("%d", &a);
    printf("Input second number: ");
    scanf("%d", &b);

    // Function call
    sum = AdditionofTwoNumbers(a, b); 
    printf("Sum of %d and %d is %d\n", a, b, sum);
    return 0;
}

// Function definition
int AdditionofTwoNumbers(int a, int b) {
    int sum = a + b;
    return sum;
}