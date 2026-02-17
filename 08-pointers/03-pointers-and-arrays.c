// this program demonstrates the use of pointers and arrays in C

#include <stdio.h>

int main() {
    int numbers[5] = {1,2,3,4,5}; // declaring and initializing an array of integers

    for (int i = 0; i < 5; i++) {
        printf("Address of numbers[%d]: %p \n", i, &numbers[i]); // print the address of each element in the array
        printf("Value of numbers[%d]: %d \n", i, *(numbers + i)); // print the value of each element using pointer arithmetic
    }

    printf("Array Adress: %p \n", numbers); // print the base address of the array
}