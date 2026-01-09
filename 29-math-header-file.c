// using math header file for mathematical operations
#include <stdio.h>
#include <math.h> // Including math header file

int main() {
    double number, result;

    // Input a number from the user
    printf("Enter a number to find its square root: ");
    scanf("%lf", &number);

    // Using sqrt function from math.h to calculate square root
    result = sqrt(number);

    // Displaying the result
    printf("The square root of %.2lf is %.2lf\n", number, result);
    return 0;
}