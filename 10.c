// Ternerrary operator and boolean operations in C

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

    // using ternary operator to check voting eligibility
    (age >= votingAge && answer == 1) ? 
        printf("You are eligible to vote.\n") : 
        printf("You are not eligible to vote.\n");

    return 0;
}