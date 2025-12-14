#include <stdio.h>
int main () {
    char category[50];
    float amount;

    printf("Enter expense category: ");
    scanf("%s", category);
    printf("Enter amount: ");
    scanf("%f", &amount);

    FILE *f = fopen("expenses.txt", "a");
    fprintf(f, "%s %.2f\n", category, amount);
    fclose(f);

    printf("\nCurrent expenses:\n");

    f = fopen("expenses.txt", "r");
    char cat[50];
    float amt;

    while (fscanf(f, "%s %f", cat, &amt) != EOF) {
        printf("%s %.2f\n", cat, amt);
    }

    fclose(f);

    return 0;
}