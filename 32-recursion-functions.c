// this will demonstrate recursion with functions in C
#include <stdio.h>
// Function prototype
int factorial(int n);
int main() {
    int number;
    // Input a number from the user
    printf("Enter a positive integer to find its factorial: ");
    scanf("%d", &number);

    // Check for negative input
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Call the recursive factorial function and display the result
        printf("The factorial of %d is %d\n", number, factorial(number));
    }
    return 0;
}

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0) {
        return 1; // Base case: factorial of 0 is 1
    } else {
        return n * factorial(n - 1); // Recursive case
    }
}