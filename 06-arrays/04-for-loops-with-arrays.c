// for loops with arrays in C

#include <stdio.h>

int main() {

    // array to hold ages of 5 students
    int age[5];

    // scanning values into the array using a for loop
    printf("Enter ages of 5 students:\n");
    for (int i =0; i<5; i++) {
        scanf("%d", &age[i]);
    }

    // printing the ages to verify input using a for loop
    printf("Ages of students are:\n");
    for (int i =0; i<5; i++) {
        printf("%d\n", age[i]);
    }

    return 0;
}