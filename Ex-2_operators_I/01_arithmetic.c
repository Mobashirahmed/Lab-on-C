// Write a program to accept two numerical values and demonstrate all standard arithmetic operators (`+`, `-`, `*`, `/`, `%`).
#include <stdio.h>

int main() {
    int a, b, sum, diff, product, quotient, remainder;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;
    diff = a - b;
    product = a * b;
    quotient = a / b;
    remainder = a % b;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}