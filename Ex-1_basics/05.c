// Write a program that intentionally triggers a compilation warning or error by overflowing a standard data type variable (e.g., assigning a value outside the valid range of a `short int`), and document your observations.
#include<stdio.h>
int main() {
    // Intentionally overflowing a short int variable
    short int myShort = 32767; // Maximum value for short int
    printf("Initial value of myShort: %d\n", myShort);

    // Overflowing the short int variable
    myShort = 32768; // This value exceeds the maximum range of short int
    printf("Value of myShort after overflow: %d\n", myShort);

    return 0;
}