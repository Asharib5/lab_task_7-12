#include <stdio.h>
int main() {
    int waterUsage, familySize;

    printf("Enter your monthly water usage in liters: ");
    scanf("%d", &waterUsage);

    printf("Enter family size: ");
    scanf("%d", &familySize);

    if (waterUsage < 3000 || familySize >= 5) {
        printf("Allowed: Large Family Exception");
    }
    else {
        printf("Bill = 1500 PKR");
    }
    return 0;
}