// Main Data Types

#include <stdio.h>
int main() {
    int number = 10;
    float decimal = 5.5;
    char character = 'A';
    double largeDecimal = 20.99;
    double syntaxDouble = 35.56789f; // no suffix for double literal
    float syntaxFloat = 35.56789f; // 'f' suffix for float literal

    printf("Integer: %d\n", number);
    printf("Float: %.0f\n", decimal); // no decimal places
    printf("Float: %.1f\n", decimal); // .1 for one decimal place
    printf("Float: %.2f\n", decimal); //.2 for two decimal places
    printf("Float: %.3f\n", decimal); //.3 for three decimal places
    printf("Character: %c\n", character);
    printf("Double: %.0lf\n", largeDecimal); // no decimal places
    printf("Double: %.1lf\n", largeDecimal); //.1 for one decimal place 
    printf("Double: %.2lf\n", largeDecimal); //.2 for two decimal places
    printf("Double: %.3lf\n", largeDecimal); //.3 for three decimal places
    printf("Double: %.5lf\n", largeDecimal); //.5 for five decimal places
    printf("Double: %lf\n", largeDecimal); // default precision
    printf("Syntax Float: %f\n", syntaxFloat); // default precision
    printf("Syntax Double: %.3f\n", syntaxDouble); // .3 for three decimal places
    
    return 0;
}