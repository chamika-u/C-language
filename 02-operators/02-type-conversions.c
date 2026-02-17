// Type conversion in c | explicit and implicit
// Type conversion is the process of converting a variable from one data type to another.
// There are two types of type conversion in C: implicit and explicit conversion.
// You need to understand the data type hierarchy in C to understand type conversion.

/*Data type hierarchy
    long double
    double
    float
    unsigned long long int
    long long int
    unsigned long int
    long int
    unsigned int
    int
    unsigned short int
    short int
    char
*/

// Lower data types are converted to higher data types during implicit conversion.
// Explicit conversion is done using type casting.
// Type casting is done by placing the desired data type in parentheses before the variable to be converted.

#include <stdio.h>

int main() {
    int x = 69;
    int y = 96;

    int sum = x + y; // implicit conversion
    printf("The sum is: %d\n", sum);

    int a = 45;
    float b = 55.5;
    float result = a + b; // implicit conversion of 'a' to float
    printf("The result is: %.2f\n", result);

    /*In here even though 'a' is an int, it is implicitly
    converted to float before the addition operation.*/

    int z= 45;
    float r = 55.5;
    float result2 = z + (int)r; // explicit conversion of 'r' to int
    printf("The result is: %.2f\n", result2);

    /*Here, we are explicitly converting 'r' to 
    an int using type casting.
    This means that the decimal part of 'r' will be truncated before the addition operation.*/
   
    int c = 100;
    float d = 200.5;
    int finalResult = c + d; // explicit conversion of 'd' to int
    printf("The final result is: %d\n", finalResult);
   
    /*In here even though 'd' is a float, we are explicitly converting it to an int using type casting.
    This means that the decimal part of 'd' will be truncated before the addition operation.*/

    char ch = 'A';
    int e = 4;
    int charResult = ch + e; // implicit conversion of 'ch' to int
    printf("The char result is: %d\n", charResult);

     /*In here even if you think you cant just add arithmatic operators to char data type, 
    char data type recognize in ASCII value so it will convert char to int implicitly*/

    // So, the ASCII value of 'A' is 65, so 65 + 4 = 69



    return 0;
}

