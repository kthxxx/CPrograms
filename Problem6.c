#include <stdio.h>

int main() {
    int seconds;
    printf("Enter elapsed time in seconds: ");
    scanf("%d", &seconds);
    
    printf("Elapsed time: %d minutes and %d seconds\n", seconds / 60, seconds % 60);
    
    return 0;
}
