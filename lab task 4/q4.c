#include <stdio.h>
int main() {
    int waterUsage;
    printf("Enter the monthly water usage in liters: ");
    scanf("%d", &waterUsage);

    if (waterUsage > 5000) {
        printf("Excessive Usage Penalty");
    }
    else if (waterUsage > 3000) {
        printf("High Usage Surcharge");
    }
    else if (waterUsage < 1000) {
        printf("Low Usage Bonus");
    }
    else {
        printf("Standard Bill");
    }
    return 0;
}