#include <stdio.h>
int main() {
    int i, n;
    float cost[10], total = 0;

    printf("Enter number of items (max 10): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter cost of item %d: ", i + 1);
        scanf("%f", &cost[i]);
        total += cost[i];
    }

    printf("Total cost is: %.2f\n", total);
    return 0;
}