// this program takes a string as input and prints it

#include <stdio.h>

int main() {
    char str[100]; // declaring a character array to hold the input string

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // taking string input from the user

    printf("You entered: %s", str); // printing the input string

    return 0;
}