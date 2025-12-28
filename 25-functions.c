// simple function in c

#include <stdio.h>

// create a function called greet
void greet() {
    printf("Hello World! I am a function! \n");
}

// main 
int main () {
    greet(); // calling function "grret"
    greet(); // we can call a function as much as we want inside of the main without type manually what function does. 
    greet(); // we create function only onetime. This saves time and devs can deliver clean code. 
    printf("This works in main. Not inside of a function."); // since this is not a function calling, this works directly in main. No need to call.  
}