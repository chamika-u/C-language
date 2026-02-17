// this program takes a string as input and prints it

#include <stdio.h>

int main() {
    char str[100]; // declaring a character array to hold the input string

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // taking string input from the user

    printf("You entered: %s", str); // printing the input string

    return 0;
}

/* 

fgets(str, sizeof(str), stdin); reads a line of text from standard input into the 
buffer str. It stops reading when either a newline is encountered or sizeof(str) - 1 
characters have been read, ensuring space for the terminating \0. Unlike 
scanf("%s", ...), fgets preserves whitespace characters and includes the trailing newline 
if it fits, making it safer and more predictable for whole-line input. 

*/