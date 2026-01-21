// this program will print pointer address for each element of an arrray 

#include <stdio.h>

int main () {
    
    // array declaration
    int array [5] = {1,2,3,4,5};

    // chnaging the allocated value for each elements using array adress;
    *array = 2;
    *(array+1) = 4;
    *(array+2) = 6;
    *(array+3) = 8;
    *(array+4) = 10;

    printf("Value of element 1: %d \n", *array);
    printf("Value of element 2: %d \n", *(array+1));
    printf("Value of element 3: %d \n", *(array+2));
    printf("Value of element 4: %d \n", *(array+3));
    printf("Value of element 5: %d \n", *(array+4));

    
    
    return 0;

}