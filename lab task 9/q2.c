#include <stdio.h>
float apply_discount(int price) {
    int p = price;
    if (p < 1000) return p * 0.90f;
    if (p <= 5000) return p * 0.85f;
    return p * 0.75f;
}

int main() {
    int prices[5];
    float total = 0.0f;
    printf("Enter prices of 5 products:\n");
    for (int i = 0; i < 5; ++i) scanf("%d", &prices[i]);

    for (int i = 0; i < 5; ++i) {
        float discounted = apply_discount(prices[i]);
        printf("Product %d: original %d, after discount %.2f\n", i+1, prices[i], discounted);
        total += discounted;
    }

    printf("Total after discounts: %.2f\n", total);
    return 0;
}