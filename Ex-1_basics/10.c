// Write a program to demonstrate the use of symbolic constants using both the `#define` preprocessor directive and the `const` variable modifier, and explain their operational differences.
#include<stdio.h>

#define PI 3.14159
const float E = 2.71828;

int main() {
    printf("PI (using #define): %f\n", PI);
    printf("E (using const): %f\n", E);
    return 0;
}