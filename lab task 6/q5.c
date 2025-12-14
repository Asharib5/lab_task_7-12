#include <stdio.h>

int main() {
    int id, seclast, last, sum, first, second;

    printf("Enter your student id : ");
    scanf("%d", &id);

    seclast = (id / 10) % 10;
    last = id % 10;
    first = (id / 1000);
    second = (id / 100) % 10;

    printf("student id :%d\n", id);

    if (id > 999 && id < 10000) {
        sum = first + second + seclast + last;
        printf("First digit :%d\n", first);
        printf("Second digit :%d\n", second);
        printf("second last digit :%d\n", seclast);
        printf("last digit :%d\n", last);
        printf("Sum of the digits of your student id is %d\n", sum);
    } else {
        printf("Invalid ID.\n");
    }

    return 0;
}