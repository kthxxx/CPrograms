#include <stdio.h>

int main() {
    int currentYear, birthYear;
    printf("Enter the current year: ");
    scanf("%d", &currentYear);
    printf("Enter your birth year: ");
    scanf("%d", &birthYear);
    printf("Your age is: %d\n", currentYear - birthYear);
    return 0;
}
