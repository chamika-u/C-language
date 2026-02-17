// continue condition in c

#include <stdio.h>

int main() {

    // variable declaration
    int count = 0;

    // do-while loop to print even numbers from 0 to 10
    do {
        count++; // increment count

        // continue condition to skip odd numbers
        if (count % 2 != 0) {
            continue; // skip the rest of the loop body for odd numbers
        }

        printf("%d\n", count); // print even number
    } while (count < 10); // condition check

    return 0;
}