// this program demonstrates how to compare two strings

#include <stdio.h>
#include <string.h>

int main () {
    char str1 [] = "Chamika-U"; // declaring and initializing the first string
    char str2 [] = "Chamika-U"; // declaring and initializing the second string

    // comparing the two strings using strcmp function
    int result = strcmp(str1, str2);
    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result < 0) {
        printf("The first string is less than the second string.\n");
    } else {
        printf("The first string is greater than the second string.\n");
    }

    char str3 [] = "Not-Chmaika";

    int result2 = strcmp(str1, str3);
    
     if (result2 == 0) {
        printf("The strings are equal.\n");
    } else if (result < 0) {
        printf("The first string is less than the third string.\n");
    } else {
        printf("The first string is greater than the third string.\n");
    }

    char str4 [] = "Chmaika";

    int result3 = strcmp(str1, str4);

     if (result3 == 0) {
        printf("The strings are equal.\n");
    } else if (result3 < 0) {
        printf("The first string is less than the fourth string.\n");
    } else {
        printf("The first string is greater than the fourth string.\n");
    }
}
