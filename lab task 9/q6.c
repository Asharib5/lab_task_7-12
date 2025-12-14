#include <stdio.h>

float discount_policy(int stock, float value) {
    if (stock < 3) return value;
    if (stock <= 5) return value * 0.9f;
    return value * 0.80f;
}

int main() {
    int stock[5];
    float price[5];
    printf("Enter price and stock for 5 books:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Book %d price stock: ", i+1);
        scanf("%f %d", &price[i], &stock[i]);
    }

    float total = 0.0f;
    for (int i = 0; i < 5; ++i) {
        float value = price[i] * stock[i];
        float after = discount_policy(stock[i], value);
        printf("Book %d: before %.2f, after %.2f\n", i+1, value, after);
        total += after;
    }

    printf("Library total value after discounts: %.2f\n", total);
    return 0;
}