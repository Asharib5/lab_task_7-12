#include <stdio.h>

int main() {
    int rain[7];
    int *r = rain;
    printf("Enter rainfall (mm) for 7 days:\n");
    for (int i = 0; i < 7; ++i) scanf("%d", &r[i]);

    int sum = 0, mx = r[0], mxday = 0;
    for (int i = 0; i < 7; ++i) {
        sum += r[i];
        if (r[i] > mx) {mx = r[i]; mxday = i;}
    }

    double avg = sum / 7.0;
    int above = 0;
    for (int i = 0; i < 7; ++i) if (r[i] > avg) above++;

    printf("Average rainfall = %.2f mm\n", avg);
    printf("Maximum rainfall day = %d with %d mm\n", mxday + 1, mx);
    printf("Days above average = %d\n", above);
    if (above > 3) printf("Rainy Week\n"); else printf("Normal Week\n");
    return 0;
}