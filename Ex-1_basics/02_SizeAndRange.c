// Write a program to display the data sizes and valid numerical ranges of all primary data types (`char`, `int`, `float`, `double`) supported by your C compiler.
#include<stdio.h>
#define CHAR_MIN -128
#define CHAR_MAX 127
#define INT_MIN -2147483648
#define INT_MAX 2147483647
#define FLT_MIN 1.175494e-38
#define FLT_MAX 3.402823e+38
#define DBL_MIN 2.225074e-308
#define DBL_MAX 1.797693e+308   
int main() {
    printf("Data Type Sizes and Ranges:\n");
    printf("--------------------------------------------------\n");
    printf("Data Type\tSize (bytes)\tRange\n");
    printf("--------------------------------------------------\n");
    printf("char\t\t%zu\t\t%d to %d\n", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("int\t\t%zu\t\t%d to %d\n", sizeof(int), INT_MIN, INT_MAX);
    printf("float\t\t%zu\t\t%.2e to %.2e\n", sizeof(float), FLT_MIN, FLT_MAX);
    printf("double\t\t%zu\t\t%.2e to %.2e\n", sizeof(double), DBL_MIN, DBL_MAX);
    printf("--------------------------------------------------\n");
    return 0;
}