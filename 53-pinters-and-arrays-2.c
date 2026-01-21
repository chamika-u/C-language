// this program will print pointer address for each element of an arrray 

#include <stdio.h>

int main () {
    
    // array declaration
    int array [5] = {1,2,3,4,5};

    // print pointer adress for each item in array
    for (int i=0; i<5; i++){
        printf("%d = %p\n", array[i], &array[i]);
    }

    printf("Array Adress of 1: %p \n", array);
    printf("Array Adress of 2: %p \n", array+1);
    printf("Array Adress of 3: %p \n", array+2);
    printf("Array Adress of 4: %p \n", array+3);
    printf("Array Adress of 5: %p \n", array+4);


    return 0;

}