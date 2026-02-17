// this program demonstrates how to print largest number in an array using pointers

#include <stdio.h>

int main() {
    
    // array declaration
    int array[5] = {35,456,1,98,145};

    // finding largest number
    int largest = *array;
    for (int i = 1; i < 5; i++) {
        if (*(array + i) > largest) {
            largest = *(array + i);
        }
    }

    // print largest element 
    printf("Largest Element is: %d", largest);

    return 0;
}