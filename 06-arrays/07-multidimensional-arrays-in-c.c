// this program demonstrates the use of multidimensional arrays in C

#include <stdio.h>

int main() {
    // declaring a 2D array to hold marks of 3 students in 4 subjects
    int marks[3][4] = {
        {85, 90, 78, 92}, // marks of student 1
        {88, 76, 95, 89}, // marks of student 2
        {90, 91, 85, 87}  // marks of student 3
    };

    // printing the marks of each student in each subject
    for (int i = 0; i < 3; i++) { // loop
        printf("Marks of student %d:\n", i + 1);
        for (int j = 0; j < 4; j++) { // loop through subjects
            printf(" Subject %d: %d\n", j + 1, marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}