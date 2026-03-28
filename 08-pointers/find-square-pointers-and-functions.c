// this program demostrates how to find square of a number using pointers and functions

#include <stdio.h>

int* findSquare(int* num) {
    int square = (*num) * (*num); // calculate the square of the number
    *num = square; // update the value at the pointer to the square

    return num; // return the pointer to the squared value
}

int main() {
    int number = 12; // initialize the number to be squared
    int* result = findSquare(&number); // pass the address of the number to the function and get the pointer to the squared value
    printf("The square of the number is: %d\n", *result); // print the squared value using the returned pointer
    return 0;
}