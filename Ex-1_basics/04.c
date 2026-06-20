// Write a program to declare multiple variables of different data types in a single line, assign them constants, and output them with matching descriptive text labels.
#include<stdio.h>
int main() {
    // Declaring multiple variables of different data types in a single line
    char myChar = 'B'; int myInt = 100; float myFloat = 5.67f; double myDouble = 9.87654;

    // Outputting the values with descriptive text labels
    printf("Character: %c\n", myChar);
    printf("Integer: %d\n", myInt);
    printf("Float: %.2f\n", myFloat);
    printf("Double: %.5lf\n", myDouble);

    return 0;
}