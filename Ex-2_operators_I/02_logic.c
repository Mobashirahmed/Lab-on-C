// Write a program to demonstrate the evaluation behavior of logical operators (`logical AND` and `logical OR`) using different truth values.
#include <stdio.h>

int main() {
    int a = 1, b = 0;
    int and_result = a && b;
    int and_result1 = a && a;
    int and_result0 = b && b;
    int or_result = a || b;
    int or_result1 = a || a;
    int or_result0 = b || b;

    printf("Logical AND (1 && 0): %d\n", and_result);
    printf("Logical AND (1 && 1): %d\n", and_result1);
    printf("Logical AND (0 && 0): %d\n", and_result0);
    printf("Logical OR (1 || 0): %d\n", or_result);
    printf("Logical OR (1 || 1): %d\n", or_result1);
    printf("Logical OR (0 || 0): %d\n", or_result0);

    return 0;
}