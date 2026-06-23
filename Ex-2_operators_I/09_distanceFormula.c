// Write a program to calculate the direct straight-line distance between two coordinates $(x_1, y_1)$ and $(x_2, y_2)$ using the mathematical distance formula.
#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, distance;

    printf("Enter the coordinates of the first point (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Enter the coordinates of the second point (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("The distance between the two points is: %f\n", distance);

    return 0;
}