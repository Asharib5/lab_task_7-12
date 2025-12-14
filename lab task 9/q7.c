#include <stdio.h>
#define VEHICLES 5
#define DAYS 7

void calculateAverage(float (*mileage)[DAYS], float avg[]) {
    for (int i = 0; i < VEHICLES; ++i) {
        float sum = 0;
        for (int j = 0; j < DAYS; ++j) {
            sum += mileage[i][j];
        }
        avg[i] = sum / DAYS;
    }
}

const char * categorize(float avg) {
    if (avg >= 18) return "Efficient";
    else if (avg >= 12) return "Moderate";
    else return "Poor";
}

void compactReport(float avg[]) {
    printf("\n--- Compact Report ---\n");
    for (int i = 0; i < VEHICLES; ++i) {
        printf("Vehicle %d: Avg = %.2f km/l, %s\n", i + 1, avg[i], categorize(avg[i]));
    }
}

void detailedReport(float (*mileage)[DAYS], float avg[]) {
    for (int i = 0; i < VEHICLES; ++i) {
        printf("\nVehicle %d\n", i + 1);
        for (int j = 0; j < DAYS; ++j) {
            printf("Day %d: %.0f\n", j + 1, mileage[i][j]);
        }
        printf("Average = %.2f km/l, Category = %s\n", avg[i], categorize(avg[i]));
    }
}

int main() {
    float mileage[VEHICLES][DAYS];
    float avg[VEHICLES];
    int choice;

    printf("Enter mileage (km/l) for 5 vehicles over 7 days:\n");
    for (int i = 0; i < VEHICLES; ++i) {
        printf("\nVehicle %d:\n", i + 1);
        for (int j = 0; j < DAYS; ++j) {
            printf("Day %d: ", j + 1);
            scanf("%f", &mileage[i][j]);
        }
    }

    calculateAverage(mileage, avg);

    printf("\nSelect report type:\n1. Compact\n2. Detailed\nEnter choice: ");
    scanf("%d", &choice);

    void (*reportFunc)(void);

    if (choice == 1) {
        reportFunc = (void (*)(void))compactReport;
    } else {
        reportFunc = (void (*)(void))detailedReport;
    }

    if (choice)
        ((void (*)(float (*)[DAYS], float *))reportFunc)(mileage, avg);

    return 0;
}