#include <stdio.h>
int main() {
    int Usage, Days;

    printf("Enter the monthly water usage in liters: ");
    scanf("%d", &Usage);

    printf("Enter the number of days water was saved (usage < 80 liters/day): ");
    scanf("%d", &Days);

    if (Usage < 2500 && Days > 10) {
        printf("Bonus: 300 PKR Discount\n");
    } else {
        printf("No Bonus\n");
    }

    return 0;
}