// this program demonstrates the pointer variable in C

#include <stdio.h>

int main() {
    int age = 25;
    printf("%p", &age); // print the address of age variable

    int* ptr = &age; // pointer variable ptr holds the address of age variable
    printf("\n%p", ptr); // print the address stored in pointer variable ptr
     
    return 0;
}