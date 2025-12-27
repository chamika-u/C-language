// Main Data Types

#include <stdio.h>
int main() {
    int number = 10;
    float decimal = 5.5;
    char character = 'A';
    double largeDecimal = 20.99;
    double syntaxDouble = 35.56789f; // no suffix for double literal
    float syntaxFloat = 35.56789f; // 'f' suffix for float literal

    printf("Integer: %d\n", number); // integer

    printf("\nFloat: %.0f\n", decimal); // no decimal places
    printf("Float: %.1f\n", decimal); // .1 for one decimal place
    printf("Float: %.2f\n", decimal); //.2 for two decimal places
    printf("Float: %.3f\n", decimal); //.3 for three decimal places

    printf("\nSyntax Float: %f\n", syntaxFloat); // default precision
    printf("Syntax Double: %.3f\n", syntaxDouble); // .3 for three decimal places

    printf("\nCharacter: %c\n", character); //Character 
    printf("Character ASCII: %d\n", character); //Character ASCII value

    printf("\nDouble: %.0lf\n", largeDecimal); // no decimal places
    printf("Double: %.1lf\n", largeDecimal); //.1 for one decimal place 
    printf("Double: %.2lf\n", largeDecimal); //.2 for two decimal places
    printf("Double: %.3lf\n", largeDecimal); //.3 for three decimal places
    printf("Double: %.5lf\n", largeDecimal); //.5 for five decimal places
    printf("Double: %lf\n", largeDecimal); // default precision

    printf("\nSize of int: %zu bytes\n", sizeof(number)); // size of int
    printf("Size of float: %zu bytes\n", sizeof(decimal)); // size of float
    printf("Size of char: %zu bytes\n", sizeof(character)); // size of char
    printf("Size of double: %zu bytes\n", sizeof(largeDecimal)); // size of double 


    return 0;
}