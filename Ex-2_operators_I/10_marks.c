// Write a program to accept the marks obtained by a student across 5 subjects, then compute and print the cumulative total marks and the final calculated average percentage.
#include <stdio.h>

int main() {
    float marks[5], total = 0, average;

    printf("Enter the marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    average = total / 5;
    

    printf("Cumulative Total Marks: %.2f\n", total);
    printf("Average Percentage: %.2f%%\n", average);

    return 0;
}