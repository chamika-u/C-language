// in this file, we will explore local variables and external variables in C
#include <stdio.h>

int AdditionofTwoNumbers(int a, int b){
    int result = a + b; 
    return result; // instead of printing, we return the result. This makes the function more versatile.
}

int main() {

    // Call the function to add the two numbers
    int sum = AdditionofTwoNumbers(25, 75);
    printf("Result: %d\n", sum);

}

// In this example, 'a', 'b', and 'result' are local variables to the function AdditionofTwoNumbers.
// They are created when the function is called and destroyed when the function exits.
// Local variables are only accessible within the function they are defined in.
// External variables (also known as global variables) are defined outside of any function
// and can be accessed by any function within the same file or other files (if declared with the extern keyword). However, this example does not include external variables.
// Using local variables helps to avoid unintended interactions between different parts of the program,
// making the code easier to understand and maintain.





