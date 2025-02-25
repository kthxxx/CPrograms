#include <stdio.h>

int main() {
    float hours;
    printf("Enter hours worked in a day: ");
    scanf("%f", &hours);
    printf("Hours worked in a 5-day week: %.2f\n", hours * 5);
    printf("Hours worked in a 252-day year: %.2f\n", hours * 252);
    return 0;
}
