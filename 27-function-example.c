#include <stdio.h>

void AdditionofTwoNumbers(int a, int b) {
    // Function to add two numbers and print the result
    int sum = a + b;
    printf("Sum of %d and %d is %d\n", a, b, sum);
}

int main() {

    int a, b;
    // Calling the function with user input
    printf("Input first number: ");
    scanf("%d", &a);
    printf("Input second number: ");
    scanf("%d", &b);

    // Function call
    AdditionofTwoNumbers(a, b);
}