#include <stdio.h>
#include <math.h>

int main() {
    int years = 1;
    float rate, total, investment;

    printf("Enter your investment: ");
    scanf("%f", &investment);

    printf("Enter your rate in decimal: ");
    scanf("%f", &rate);

    while (years <= 10) {
        total = investment * pow(1 + rate, years);
        printf("%d %0.2f\n", years, total);
        years++;
    }

    return 0;
}