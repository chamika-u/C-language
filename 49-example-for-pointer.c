// example code for pointer usage in C

#include <stdio.h>

int main () {
    double salary;
    printf("Enter your salary: ");
    scanf("%lf", &salary);

    double* ptr = &salary; // pointer variable ptr holds the address of salary variable
    printf("Address of salary variable: %p \n", ptr); // print the address stored in pointer variable ptr
    printf("Value of salary variable using pointer: %.2lf \n", *ptr); // print the value at the address stored in pointer variable ptr

    // increase the salary by 2x using the pointer
    *ptr = *ptr * 2;
    printf("Updated salary using pointer: %.2lf \n", *ptr);

    return 0
}