// program for demonstrates string manipulation functions

#include <stdio.h>
#include <string.h>

int main() {
    char str1[50];
    char str2[50];

    // Getting user input for the first string
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0; // Remove newline character

    // Getting user input for the second string
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0; // Remove newline character

    // Demonstrating strlen function
    printf("Length of first string: %zu\n", strlen(str1));
    printf("Length of second string: %zu\n", strlen(str2));

    // Demonstrating strcat function
    char concatenated[100];
    strcpy(concatenated, str1); // Copy first string to concatenated
    strcat(concatenated, str2); // Concatenate second string to concatenated
    printf("Concatenated string: %s\n", concatenated);
    
    // Demonstrating strcpy function
    char copied[50];
    strcpy(copied, str1); // Copy first string to copied
    printf("Copied string: %s\n", copied);
    return 0;
}