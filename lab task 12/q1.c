#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, add, threshold;

    printf("Hours: ");
    scanf("%d", &n);

    int *steps = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &steps[i]);
    }

    printf("More hours: ");
    scanf("%d", &add);

    steps = (int*)realloc(steps, (n + add) * sizeof(int));
    for (int i = n; i < n + add; i++) {
        scanf("%d", &steps[i]);
    }
    n += add;

    printf("Threshold: ");
    scanf("%d", &threshold);

    int max = steps[0], total = 0, above = 0;
    for (int i = 0; i < n; i++) {
        if (steps[i] > max) max = steps[i];
        if (steps[i] > threshold) above++;
        total += steps[i];
    }

    FILE *f = fopen("fitness_tracker.txt", "w");
    fprintf(f, "%d %d %d", max, total, above);
    fclose(f);
    free(steps);

    return 0;
}
