#include <stdio.h>
int main() {
    char city[20];
    float temp;
    FILE *f = fopen("temperature.txt", "w");

    for (int i = 0; i < 5; i++) {
        printf("Enter city name: ");
        scanf("%s", city);
        printf("Enter avg temp: ");
        scanf("%f", &temp);

        fprintf(f, "%s %.2f\n", city, temp);
    }
    fclose(f);

    f = fopen("temperature.txt", "r");
    float maxTemp = -999;
    char hottest[20];

    while (fscanf(f, "%s %f", city, &temp) != EOF) {
        if (temp > maxTemp) {
            maxTemp = temp;
            strcpy(hottest, city);
        }
    }
    fclose(f);

    printf("City with highest temp: %s (%.2f)\n", hottest, maxTemp);

    return 0;
}