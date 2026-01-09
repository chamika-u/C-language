// addition of two numbers using a function in C

#include <stdio.h>

void AdditionofTwoNumbers(int a, int b) {
    // Function to add two numbers and print the result
    int sum = a + b;
    printf("Sum of %d and %d is %d\n", a, b, sum);
}

int main() {
    // Function call
    AdditionofTwoNumbers(10, 20);
    AdditionofTwoNumbers(30, 40);
    AdditionofTwoNumbers(50, 60);
    AdditionofTwoNumbers(70, 80); 
    return 0;
}