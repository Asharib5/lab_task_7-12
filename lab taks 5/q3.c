#include <stdio.h>
int main() {
    int usage, locCode, bill;

    printf("Enter monthly water usage: ");
    scanf("%d", &usage);
    printf("Enter location code (1-City, 2-Suburbs, 3-Rural): ");
    scanf("%d", &locCode);

    switch (locCode) {
        case 1:
            bill = 1000;
            break;
        case 2:
            bill = 800;
            break;
        case 3:
            bill = 500;
            break;
        default:
            printf("Invalid location code\n");
            return 1;
    }

    if (usage > 5000) {
        bill += 500;
        printf("High usage surcharge applied.\n");
    }
    printf("Total bill: %d\n", bill);

    return 0;
}