#include <stdio.h>

int main() {
    int num, power, i;
    unsigned long long int answer = 1;

    printf("Enter number : ");
    scanf("%d", &num);

    printf("Enter power : ");
    scanf("%d", &power);

    for (i = 1; i <= power; i++) {
        answer = answer * num;
    }

    printf("%llu\n", answer);
    
    return 0;
}