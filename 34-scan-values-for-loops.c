// how to get values from a for loop in C

#include <stdio.h>
int main() {
    // array to hold ages of 5 students
    int age[5];

    // scanning values into the array using scanf
    printf("Enter ages of 5 students:\n");
    scanf("%d %d %d %d %d", &age[0], &age[1], &age[2], &age[3], &age[4]);

    // printing the ages to verify input
    printf("Ages of students are:\n");
    printf("%d\n", age[0]);
    printf("%d\n", age[1]);
    printf("%d\n", age[2]);
    printf("%d\n", age[3]);
    printf("%d\n", age[4]);

    return 0;

}