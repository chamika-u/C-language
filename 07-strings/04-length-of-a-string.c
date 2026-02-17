// this program calculates the length of a string without using built-in functions

#include <stdio.h>
#include <string.h>

int main() {
    char name[20] = "Chamik-U"; // declaring and initializing a string
    printf("String: %s\n", name);

    printf("\n length of the string is: %zu\n", strlen(name));
}