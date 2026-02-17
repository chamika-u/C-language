// this program calculates the average marks of 5 students using arrays in C

#include <stdio.h>

int main() {
    int marks[5]; // declaring an array to hold marks of 5 students
    int sum = 0;  // variable to hold the sum of marks
    float average; // variable to hold the average marks

    // scanning marks into the array using a for loop
    printf("Enter marks of 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("Marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // calculating the sum of marks using a for loop
    for (int i = 0; i < 5; i++) {
        sum += marks[i];
    }

    // calculating the average
    average = sum / 5.0;

    // printing the average marks
    printf("The average marks of the 5 students is: %.2f\n", average);

    return 0;
}