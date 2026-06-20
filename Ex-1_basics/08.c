// Write a program to define and use global vs. local variables of the same name and observe how the compiler resolves variable scope during execution.
#include<stdio.h>
// Global variable declaration
int Var = 10;

int main() {
    // Local variable declaration with the same name
    int Var = 20;
    
    printf("Global variable: %d\n", Var);
    printf("Local variable: %d\n", Var);
    
    return 0;
}