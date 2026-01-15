// Example of strcat function in C

#include <stdio.h>
#include <string.h>

int main() {
    char name [20] = "Chamika-U"; // declaring and initializing the source string
    char str [30] = "My name is "; // declaring and initializing the destination string with sufficient size

    strcat(str, name); // concatenating the string from name to str
    printf("%s\n", str); // printing the concatenated string
}