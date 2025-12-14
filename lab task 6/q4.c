#include <stdio.h>

int main() {
    int id, seclast, last, sum, i;
    long long fsum = 1;

    printf("Enter your student id : ");
    scanf("%d", &id);

    seclast = (id / 10) % 10;
    last = id % 10;
    sum = seclast + last;

    printf("student id :%d\n", id);
    printf("second last digit :%d\n", seclast);
    printf("last digit :%d\n", last);
    printf("sum :%d\n", sum);

    if (sum == 0 || sum == 1) {
        printf("Factorial of %d is 1.\n", sum);
    } else if (sum > 0) {
        for (i = 1; i <= sum; i++) {
            fsum = fsum * i;
        }
        printf("Factorial of %d is %lld\n", sum, fsum);
    } else {
        printf("Invalid input\n");
    }

    return 0;
}