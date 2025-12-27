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