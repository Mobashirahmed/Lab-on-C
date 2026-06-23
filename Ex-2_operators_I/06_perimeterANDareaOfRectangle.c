// Write a program to accept the length and breadth of a rectangle and compute both its total surface perimeter and area.
#include <stdio.h>

int main() {
    float length, breadth, perimeter, area;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    perimeter = 2 * (length + breadth);
    area = length * breadth;

    printf("Perimeter of the rectangle: %f\n", perimeter);
    printf("Area of the rectangle: %f\n", area);

    return 0;
}