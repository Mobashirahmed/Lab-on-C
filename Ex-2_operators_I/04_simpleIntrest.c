// Write a program to calculate Simple Interest based on user-supplied values for Principal ($P$), Rate ($R$), and Time ($T$).
#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);
    printf("Enter the time period: ");
    scanf("%f", &time);
    simpleInterest = (principal * rate * time) / 100;
    printf("Simple Interest: %f\n", simpleInterest);
    return 0;
}