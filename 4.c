// Program to take user input for different data types and display them

#include <stdio.h>

int main(){

    //variable declarion
    int age;
    float marks;
    double average;
    char grade;

    //getting inputs from user for each variables
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("\nEnter your makrs: ");
    scanf("%f", &marks);

    printf("\nEnter your average: ");
    scanf("%lf", &average);

    printf("\nEnter your garde: ");
    scanf(" %c", &grade);

    //printing all the user input 
    printf("Your age is %d\n", age);
    printf("Your marks is %f\n", marks);
    printf("Your average us %lf\n", average);
    printf("Your grade is %c", grade);

}