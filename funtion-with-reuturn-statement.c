// function with returning an integer value
#include <stdio.h>

int AdditionofTwoNumbers(int a, int b) {
    // Function to add two numbers and return the result
    int sum = a + b;
    return sum;
}

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