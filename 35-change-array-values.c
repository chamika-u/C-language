// changing array values in C

#include <stdio.h>

int main() {
    int age[5] = {23, 24, 25, 26, 27}; // declaring and initializing an array
    printf("Values in age is %d, %d, %d, %d, %d", age[0], age[1], age[2], age[3], age[4]);

    // changing values of the array
    age[0] = 30;
    age[1] = 31;
    age[2] = 32;
    age[3] = 33;
    age[4] = 34;
    printf("\nValues in age after changing is %d, %d, %d, %d, %d", age[0], age[1], age[2], age[3], age[4]);
    
    return 0;
}