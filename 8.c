// Boolean comparisons in C

#include <stdio.h>
#include <stdbool.h>

int main() {

    // varible declaration
    bool a = true;
    bool b = false;

    // printing boolean values
    printf(" Boolean a: %d\n", a);
    printf(" Boolean b: %d\n", b);

    // boolean operations
    bool and_result = a && b; // logical AND
    bool or_result = a || b;  // logical OR
    bool not_result = !a;     // logical NOT    
    
    // printing results of boolean operations
    printf(" a AND b: %d\n", and_result);
    printf(" a OR b: %d\n", or_result);
    printf(" NOT a: %d\n", not_result);

    return 0;

}