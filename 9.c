// If statements in C

#include <stdio.h>
#include <stdbool.h>

int main() {

    // variable declaration
    int age;
    int votingAge = 18;
    int answer;

    // user inputs
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("\nAre you a citizen? (1 for yes, 0 for no): ");
    scanf("%d", &answer);

    /*
    // if-else statement to check voting eligibility based on age (Basic version)

    if (age >= votingAge) {
        printf("You are eligible to vote.\n");
    } 
    else {
        printf("You are not eligible to vote.\n");
    }
    */

    // nested if statement to check citizenship and age
    if (age > 120) {    // basic validation for age input
        printf("Invalid age entered.\n"); 
    }
    else if (age < 0) { // basic validation for age input
        printf("Invalid age entered.\n");
    }
    else { // valid age input
        if (answer == 1) { // check if the user is a citizen
            if (age >= votingAge) { // check if the user is of voting age
                printf("You are eligible to vote.\n");
            }
             else { // if the user is not of voting age
                printf("You are not eligible to vote.\n");
            }
        }
        else if (answer == 0) { // if the user is not a citizen
            printf("You are not eligible to vote.\n");
        }
        else if (answer != 0 && answer != 1) { // basic validation for citizenship input
            printf("Invalid input for citizenship.\n");
        }
    }
    
    return 0;
}