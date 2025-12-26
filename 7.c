// Type conversion in c | explicit and implicit

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

    int c = 100;
    float d = 200.5;
    int finalResult = c + (int)d; // explicit conversion of 'd' to int
    printf("The final result is: %d\n", finalResult);

    char ch = 'A';
    int e = 4;

    /*In here even if you think you cant just add arithmatic operators to char data type, 
    char data type recognize in ASCII value so it will convert char to int implicitly*/

    int charResult = ch + e; // implicit conversion of 'ch' to int
    printf("The char result is: %d\n", charResult);

    // So, the ASCII value of 'A' is 65, so 65 + 4 = 69
    
    return 0;
}

