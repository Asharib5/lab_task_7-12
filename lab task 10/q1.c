#include <stdio.h>
int main() {
    char name[50];
    float price;
    int quant;

    printf("Enter product name: ");
    scanf("%s", name);

    printf("Enter price: ");
    scanf("%f", &price);

    printf("Enter quantity: ");
    scanf("%d", &quant);

    FILE *f = fopen("products.txt", "w");

    fprintf(f, "%s %.2f %d\n", name, price, quant);
    fclose(f);

    printf("Product saved successfully.\n");

    return 0;
}