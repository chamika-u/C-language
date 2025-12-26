// If statements in C

#include <stdio.h>
#include <stdbool.h>

int main() {

    // variable declaration
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    // if-else statement to check voting eligibility
    if (age >= 18) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }
}