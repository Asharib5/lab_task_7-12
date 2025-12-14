#include <stdio.h>
#include <math.h>

struct Building {
    int id;
    int initialHeight;
    float growthRate;
};

int calcHeight(struct Building b, int day) {
    int height = b.initialHeight;
    for (int i = 1; i < day; i++) {
        int increase = (int)floor(height * b.growthRate);
        height += increase;
    }
    return height;
}

int main() {
    struct Building b = {1, 100, 0.10};
    int day;
    printf("Enter day: ");
    scanf("%d", &day);
    printf("Estimated Height: %d\n", calcHeight(b, day));
    return 0;
}