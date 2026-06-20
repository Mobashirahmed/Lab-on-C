// Write a program that demonstrates how to initialize, assign values to, and print variables belonging to diverse data types.
#include<stdio.h>
int main() {
    // Initializing variables of different data types
    char myChar = 'A';
    int myInt = 42;
    float myFloat = 3.14f;
    double myDouble = 2.71828;

    // Printing the values of the variables
    printf("Character: %c\n", myChar);
    printf("Integer: %d\n", myInt);
    printf("Float: %.2f\n", myFloat);
    printf("Double: %.5lf\n", myDouble);

    return 0;
}