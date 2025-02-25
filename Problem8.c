#include <stdio.h>
#include <math.h>

int main() {
    float angle = 35.2, shadow = 150, height;
    height = tan(angle * M_PI / 180) * shadow;  // Convert degrees to radians
    printf("Height of the oil derrick: %.2f feet\n", height);
    
    return 0;
}
