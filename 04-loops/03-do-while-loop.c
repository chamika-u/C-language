// do while loop in C

#include <stdio.h>

int main() {

    // variable declaration
    int count = 1;

    // do-while loop to print numbers from 1 to 5
    do {
        printf("%d\n", count);
        count++; // increment count
    } while (count <= 5); // condition check

    return 0;
}

/* difference between while and do-while loop:
   - while loop checks the condition before executing the loop body.
   - do-while loop executes the loop body first and then checks the condition.
   - Therefore, do-while loop guarantees at least one execution of the loop body, 
     even if the condition is false initially.
*/