// this program demonstrates the pointer variable in C

#include <stdio.h>

int main() {
    int age = 25;
    printf("Adress: %p \n", &age); // print the address of age variable

    int* ptr = &age; // pointer variable ptr holds the address of age variable
    printf("Adress: %p \n", ptr); // print the address stored in pointer variable ptr
    
    printf("Value: %d \n", *ptr); // print the value at the address stored in pointer variable ptr
    
    *ptr = 30; // changing the value at the address stored in pointer variable ptr
    printf("New Value: %d \n", age); // print the new value of age variable

    return 0;
}