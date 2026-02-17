// this program demonstrates change value of a number using pointers and functions

#include <stdio.h>

// function to change value
void findValue (int* num){
    *num= 55;
}

int main() {

    // variable declaration
    int number = 12;

    // print number
    printf("Number: %d \n", number); 

    // calling the function
    findValue(&number);

    // print changed value
    printf("Changed Number: %d", number);

    return 0;

}