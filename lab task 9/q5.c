#include <stdio.h>

int main() {
    int att[30][5];
    int (*p)[5] = att;
    printf("Enter attendance (1 present, 0 absent) for 30 students over 5 days:\n");
    for (int i = 0; i < 30; ++i) {
        printf("Student %d: ", i+1);
        for (int d = 0; d < 5; ++d) scanf("%d", &p[i][d]);
    }

    int defaulters = 0;
    for (int i = 0; i < 30; ++i) {
        int sum = 0;
        for (int d = 0; d < 5; ++d) sum += p[i][d];
        double percent = (sum / 5.0) * 100.0;
        printf("Student %d: attendance = %.2f%% - ", i+1, percent);
        if (percent >= 75) printf("Good\n");
        else if (percent >= 50) printf("Average\n");
        else printf("Poor\n");

        if (percent < 75) defaulters++;
    }
    printf("Total defaulters (attendance < 75%%): %d\n", defaulters);
    return 0;
}