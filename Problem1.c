#include <stdio.h>

int main() {
    float edge;
    printf("Enter the edge length of the cube: ");
    scanf("%f", &edge);
    printf("Surface area of one side: %.2f\n", edge * edge);
    printf("Total surface area: %.2f\n", 6 * edge * edge);
    printf("Volume: %.2f\n", edge * edge * edge);
    return 0;
}
