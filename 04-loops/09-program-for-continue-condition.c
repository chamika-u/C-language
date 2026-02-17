// program to demonstrate the use of 'continue' statement in C

#include <stdio.h>

int main() {

    while (1) {
        // variable declaration
        int i;

        // user input
        printf("Enter a number: ");
        scanf("%d", &i);

        // break condition to exit the loop
        if (i<=0) {
            break;
        }

        // continue condition to skip odd numbers
        if ((i%2)!=0) {
            continue;
        }

        printf("%d is even\n", i);
    }

    return 0;
}
    