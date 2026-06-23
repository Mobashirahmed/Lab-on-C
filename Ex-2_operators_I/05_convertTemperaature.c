// Write a program to perform temperature conversion from Fahrenheit to Centigrade and vice-versa.
#include <stdio.h>

int main() {
    float fahrenheit, centigrade;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Convert Fahrenheit to Centigrade
    centigrade = (fahrenheit - 32) * 5 / 9;
    printf("Temperature in Centigrade: %f\n", centigrade);

    printf("Enter temperature in Centigrade: ");
    scanf("%f", &centigrade);

    // Convert Centigrade to Fahrenheit
    fahrenheit = (centigrade * 9 / 5) + 32;
    printf("Temperature in Fahrenheit: %f\n", fahrenheit);

    return 0;
}