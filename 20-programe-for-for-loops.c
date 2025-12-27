// checking odd numbers between 1 to 100 using for loops

#include <stdio.h>

int main() {

    // variable declaration
    int i;

    // for loop operations
    for (i=1; i<=100; i++) {
        // check number is odd
        if (i%2 != 0) {
            printf("%d\n", i); // print odd number
        }
    }
}