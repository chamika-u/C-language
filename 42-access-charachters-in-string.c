// this program demonstrates how to navigate and access characters in a string

#include <stdio.h>

int main() {
    char str[] = "Hello, World!"; // declaring and initializing a string

    // Accessing and printing each character in the string using its index
    printf("Characters in the string:\n");
    printf("str[0]: %c\n", str[0]);   // H
    printf("str[1]: %c\n", str[1]);   // e  
    printf("str[2]: %c\n", str[2]);   // l
    printf("str[3]: %c\n", str[3]);   // l
    printf("str[4]: %c\n", str[4]);   // o
    printf("str[5]: %c\n", str[5]);   // ,
    printf("str[6]: %c\n", str[6]);   //
    printf("str[7]: %c\n", str[7]);   // W
    printf("str[8]: %c\n", str[8]);   // o      
    printf("str[9]: %c\n", str[9]);   // r
    printf("str[10]: %c\n", str[10]); // l
    printf("str[11]: %c\n", str[11]); // d

    return 0;
}
