// Write a C program to print the sample text strings `"hello world"` and `"Welcome to C Programming"` using different layout configurations with escape sequences like `\n` and `\t`.
#include<stdio.h>
int main(){
    printf("hello world\n");
    printf("Welcome to C Programming\n");
    printf("\n"); // New line for better readability
    printf("\tThis is an indented line using tab escape sequence.\n");
    printf("This is a line with a new line character at the end.\n");
    return 0;
}