// this program demonstrates how to copy a string from one variable to another

#include <stdio.h>
#include <string.h>

int main() {
    char name [20] = "Chamik-U"; // declaring and initializing the source string
    char copyName [20]; // declaring the destination string with sufficient size
    
    strcpy(copyName, name); // copying the string from name to copyName
    
    printf("Original String: %s\n", name); // printing the original string
    printf("Copied String: %s\n", copyName); // printing the copied string
    
    return 0;


}