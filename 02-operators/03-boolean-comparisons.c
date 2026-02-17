// Boolean comparisons in C

#include <stdio.h>
#include <stdbool.h>

int main() {

    // varible declaration
    bool a = true;
    bool b = false;
    bool c;
    bool d;
    int number1 = 10;
    int number2 = 20;
    int age = 25;
    int height = 175;   
    int votingAge = 18;

    // printing boolean values
    printf(" Boolean a: %d\n", a);
    printf(" Boolean b: %d\n", b);

    // boolean operations
    bool and_result = a && b; // logical AND
    bool or_result = a || b;  // logical OR
    bool not_result = !a;     // logical NOT   

    // comparison operations with variables
    bool meetsHeightRequirement = (height >= 150) && (age >= 18); // height and age comparison
    bool meetsEitherRequirement = (height >= 150) || (age >= 18); // height or age comparison
    bool negationExample = !(age < votingAge); // negation of age comparison
    bool isEligible = (age >= votingAge); // age comparison
    bool complexExpression = ((number1 < number2) && (age >= votingAge)) || (height > 200); // complex expression
    
    // printing results of boolean operations
    printf("\naAND b: %d\n", and_result);
    printf(" a OR b: %d\n", or_result);
    printf(" NOT a: %d\n", not_result);

    // comparison operations
    c = (5 > 3);   // greater than
    d = (5 < 3);   // less than

    // printing results of comparison operations
    printf("\n 5 > 3: %d\n", c);
    printf(" 5 < 3: %d\n", d); 
    printf(" 5 == 5: %d\n", (5 == 5)); // equal to
    printf(" 5 != 3: %d\n", (5 != 3)); // not equal to
    printf(" 5 >= 3: %d\n", (5 >= 3)); // greater than or equal to
    printf(" 5 <= 3: %d\n", (5 <= 3)); // less than or equal to

    printf("\n number1 < number2: %d\n", (number1 < number2)); // less than
    printf(" number1 > number2: %d\n", (number1 > number2)); // greater than
    printf(" Meets height requirement: %d\n", meetsHeightRequirement); // height and age comparison
    printf(" Meets either requirement: %d\n", meetsEitherRequirement); // height or age comparison
    printf(" Negation example: %d\n", negationExample); // negation of age comparison
    printf(" Is eligible to vote: %d\n", isEligible); // age comparison
    printf(" Complex expression result: %d\n", complexExpression); // complex expression

    return 0;

}