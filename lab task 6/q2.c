#include <stdio.h>

int main() {
    int townA = 10000, townB = 8000, years = 0;

    while (townB <= townA) {
        townA = townA + 250;
        townB = townB + 400;
        years = years + 1;
    }

    printf("After %d years:\n", years);
    printf("Town A population: %d\n", townA);
    printf("Town B population: %d\n", townB);
    printf("Town B surpasses Town A after %d years.\n", years);

    return 0;
}