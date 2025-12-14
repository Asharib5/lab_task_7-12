#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, add, th;

    printf("Readings: ");
    scanf("%d", &n);

    float *t = (float*)malloc(n * sizeof(float));
    for (int i = 0; i < n; i++) {
        scanf("%f", &t[i]);
    }

    printf("Add: ");
    scanf("%d", &add);

    t = (float*)realloc(t, (n + add) * sizeof(float));
    for (int i = n; i < n + add; i++) {
        scanf("%f", &t[i]);
    }
    n += add;

    printf("Alert threshold: ");
    scanf("%d", &th);

    float max = t[0], min = t[0];
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        if (t[i] > max) max = t[i];
        if (t[i] < min) min = t[i];
        if (t[i] > th) count++;
    }

    FILE *f = fopen("temperature_summary.txt", "w");
    fprintf(f, "%.2f %.2f %d", max, min, count);
    fclose(f);
    free(t);

    return 0;
}