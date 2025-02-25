#include <stdio.h>

int main() {
    float hourlyRate, hoursWorked, taxRate, grossPay, netPay;
    printf("Enter hourly pay rate: ");
    scanf("%f", &hourlyRate);
    printf("Enter hours worked: ");
    scanf("%f", &hoursWorked);
    
    grossPay = hourlyRate * hoursWorked;
    printf("Gross pay: %.2f\n", grossPay);

    printf("Enter withholding tax rate (as a decimal, e.g., 0.10 for 10%%): ");
    scanf("%f", &taxRate);
    netPay = grossPay * (1 - taxRate);
    printf("Net pay after tax: %.2f\n", netPay);
    
    return 0;
}
