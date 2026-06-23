// Write a program to read a circle's radius from the keyboard, calculate its area, and output the final result in both standard floating-point format and exponential scientific notation.
#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    printf("Area of the circle (standard format): %f\n", area);
    printf("Area of the circle (scientific notation): %e\n", area);
    return 0;
}