#include <stdio.h>

int main() {
    float dollars, euros, yen;
    const float EURO_RATE = 0.91, YEN_RATE = 130.5;
    printf("Enter amount in dollars: ");
    scanf("%f", &dollars);
    
    euros = dollars * EURO_RATE;
    yen = dollars * YEN_RATE;
    
    printf("Equivalent in Euros: %.2f\n", euros);
    printf("Equivalent in Japanese Yen: %.2f\n", yen);
    
    return 0;
}
