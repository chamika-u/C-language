// function parameters in C

#include <stdio.h>

void square(int num) {

    // function to calculate square of a number
    int result = num * num;
    printf("Square of %d is %d\n", num, result);
}

int main() {
    
    // calling the function with different arguments
    square(4);
    square(7);
    square(10);

    return 0;
}
