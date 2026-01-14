// ctype.h header file example for character handling functions
#include <stdio.h>
#include <ctype.h> // Including ctype header file

int main() {
    char ch;

    // Input a character from the user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is an uppercase letter
    if (isupper(ch)) {
        printf("%c is an uppercase letter.\n", ch);
    }
    // Check if the character is a lowercase letter
    else if (islower(ch)) {
        printf("%c is a lowercase letter.\n", ch);
    }
    // Check if the character is a digit
    else if (isdigit(ch)) {
        printf("%c is a digit.\n", ch);
    }
    // If it's none of the above, it's a special character
    else {
        printf("%c is a special character.\n", ch);
    }

    return 0;
}