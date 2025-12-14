#include <stdio.h>
int main() {
    int waterUsage;
    printf("Enter your daily water (liters): ");
    scanf("%d", &waterUsage);

    if (waterUsage <= 100) {
        printf("Efficient Usage");
    }
    else {
        printf("High Usage Detected");
    }
    return 0;
}