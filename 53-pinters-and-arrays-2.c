// this program will print pointer address for each element of an arrray 

#include <stdio.h>

int main () {
    
    // array declaration
    int array [5] = {1,2,3,4,5};

    // print pointer adress for each item in array
    for (int i=0; i<5; i++){
        printf("%d = %p\n", array[i], &array[i]);
    }

    printf("Array Adress: %p", array+2);

    return 0;

}