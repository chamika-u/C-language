// break condition in C

#include <stdio.h>

int main () {

    // variable declaration
    int i;

    // for loop with break condition
    for (i = 1; i <= 10; i++) {
        // check for break condition
        if (i == 6) {
            break; // exit loop when i is 6
        }
        printf("%d\n", i); // print value of i
    }
}