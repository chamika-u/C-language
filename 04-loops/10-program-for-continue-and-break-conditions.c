// program for printing number if it is negative odd from user

#include <stdio.h>

int main() {

    // checking whether its negative or positive
    while (1){
        // variable declaration
        int number;

        // user input
        printf("Enter your number: ");
        scanf("%d", &number);

        // break condition to exit the loop
        if (number>0) {
            continue;
        }
        
        // checking whether its odd or even
        if ((number % 2) != 0) {
            printf("%d is negative odd number\n", number);
            break;
        }  
    }
}