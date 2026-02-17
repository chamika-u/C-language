// program for while loop

#include <stdio.h>

int  main() {

    // variable declaration
    int number;
    int count = 1;

    // user input
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // while loop to print multiplication table
    while (count <= number) {
        int product = number * count; // calculate product
        printf("%d x %d = %d\n", number, count, product); // print multiplication table
        count++; // increment count
    }

}