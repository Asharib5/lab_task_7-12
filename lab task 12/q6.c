#include <stdio.h>
#include <stdlib.h>

int main() {
    float rate;
    printf("Rate: ");
    scanf("%f", &rate);

    int n;
    printf("Rentals: ");
    scanf("%d", &n);

    float *d = (float*)malloc(n * sizeof(float));
    for (int i = 0; i < n; i++) {
        scanf("%f", &d[i]);
    }

    float total = 0, max = d[0];
    FILE *f = fopen("Rental_Invoices.txt", "w");

    for (int i = 0; i < n; i++) {
        float cost = d[i] * rate;
        fprintf(f, "%.2f %.2f\n", d[i], cost);
        total += d[i];
        if (d[i] > max) max = d[i];
    }

    fprintf(f, "Total %.2f Max %.2f", total, max);
    fclose(f);
    free(d);

    return 0;
}