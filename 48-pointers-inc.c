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

/*
Common Mistakes: 

1. Not initializing the pointer variable before dereferencing it.
    Example:
    int* ptr; // uninitialized pointer
    printf("%d", *ptr); // undefined behavior

2. Using the wrong format specifier for printing addresses.
    Example:
    int age = 25;
    int* ptr = &age;
    printf("%d", ptr); // incorrect, should use %p
    printf("%p", ptr); // correct

3. Forgetting to use the address-of operator (&) when assigning an address to a pointer.
    Example:
    int age = 25;
    int* ptr = age; // incorrect, should use &age
    int* ptr = &age; // correct

4. Dereferencing a NULL or invalid pointer.
    Example:
    int* ptr = NULL;
    printf("%d", *ptr); // undefined behavior
    Always ensure the pointer is valid before dereferencing.

5. Modifying the pointer itself instead of the value it points to.
    Example:
    int age = 25;
    int* ptr = &age;
    ptr = ptr + 1; // incorrect, modifies the pointer
    *ptr = 30; // correct, modifies the value at the address

*/