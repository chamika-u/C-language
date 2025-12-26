// Boolean comparisons in C

#include <stdio.h>
#include <stdbool.h>

int main() {

    // varible declaration
    bool a = true;
    bool b = false;
    bool c;
    bool d;

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

    // comparison operations
    c = (5 > 3);   // greater than
    d = (5 < 3);   // less than

    // printing results of comparison operations
    printf(" 5 > 3: %d\n", c);
    printf(" 5 < 3: %d\n", d);
    printf(" 5 == 5: %d\n", (5 == 5)); // equal to
    printf(" 5 != 3: %d\n", (5 != 3)); // not equal to
    printf(" 5 >= 3: %d\n", (5 >= 3)); // greater than or equal to
    printf(" 5 <= 3: %d\n", (5 <= 3)); // less than or equal to
    
    return 0;

}