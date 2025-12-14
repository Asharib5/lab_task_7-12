#include <stdio.h>

int main() {
    int denom[] = {5000, 1000, 500};
    int count[] = {0,0,0};
    int *d = denom;
    int *c = count;
    int amount;

    printf("Enter withdrawal amount (multiple of 50): ");
    if (!scanf("%d", &amount)) return 0;

    if (amount % 50 != 0) {
        printf("Amount must be multiple of 50.\n");
        return 0;
    }

    for (int i = 0; i < 3; ++i) {
        c[i] = amount / d[i];
        amount = amount % d[i];
    }

    printf("Dispensed:\n");
    for (int i = 0; i < 3; ++i) {
        printf("Rs. %d : %d notes\n", d[i], c[i]);
    }

    if (amount != 0) printf("Remaining amount that cannot be dispensed: %d\n", amount);
    return 0;
}