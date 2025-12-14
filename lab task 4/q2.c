#include <stdio.h>
int main() {
    int waterUsage;
    printf("Enter your monthly water usage in liters: ");
    scanf("%d", &waterUsage);

    if (waterUsage <= 3000) {
        printf("Bill = 500 PKR");
    }
    else {
        printf("Bill 1000 PKR");
    }
    return 0;
}