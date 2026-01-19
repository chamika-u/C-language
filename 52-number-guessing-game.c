// number guessing game 

#include <stdio.h>
#include <stdlib.h> // Required for rand() and srand()
#include <time.h>   // Required for time()

int number;

// function for get number as a input from user
int inputFromUser() {

    // loop until valid input is received
    while (1) {
        printf("----Number Guessing Game----\n");
        printf("Guess the number under 10\n");
        scanf("%d", &number);

        // check if number is in valid range
        if (number >= 0 && number <= 10) {
            return number; // return the valid number
        }

        printf("Invalid Input (Input number greater than or equal to 0 and lower or equal to 10)\n"); 
    }
}

// function for generate the secret number
int numberGen() {
    static int seeded = 0;

    if (!seeded) {
        srand((unsigned)time(NULL));
        seeded = 1;
    }

    return rand() % 11;
}

// main function
int main () {
    int secretNumber = numberGen();
    int guess = inputFromUser();

    if (guess == secretNumber) {
        printf("Congratulations! You guessed the correct number: %d\n", guess);
    } else {
        printf("Sorry, wrong guess. The correct number was: %d\n", secretNumber);
    }
}