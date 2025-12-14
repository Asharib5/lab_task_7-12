#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int qty;
    float price;
} Med;

int main() {
    int n;
    printf("Number of medicines: ");
    scanf("%d", &n);

    Med *m = (Med*)malloc(n * sizeof(Med));

    for (int i = 0; i < n; i++) {
        printf("Enter name, quantity, price (e.g. painkiller 10 2.50): ");
        scanf("%s %d %f", m[i].name, &m[i].qty, &m[i].price);
    }

    float total = 0;

    FILE *f = fopen("medicine_inventory.txt", "w");

    for (int i = 0; i < n; i++) {
        fprintf(f, "%s %d %.2f\n", m[i].name, m[i].qty, m[i].price);
        total += m[i].qty * m[i].price;
    }

    fprintf(f, "Total %.2f", total);
    fclose(f);
    free(m);

    return 0;
}