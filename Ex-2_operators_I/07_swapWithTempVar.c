// Write a program to swap the contents of two separate numeric variables *with* the utilization of a temporary third variable.
#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping:\n");
    printf("First number: %d\n", a);
    printf("Second number: %d\n", b);

    return 0;
}