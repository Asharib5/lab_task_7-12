#include <stdio.h>
int main() {
    int age, balance;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter balance: ");
    scanf("%d", &balance);

    if (age < 21) {
        printf("Not eligible for ride (underage)\n");
    } else if (balance < 200) {
        printf("Not eligible (insufficient balance)\n");
    } else {
        printf("Eligible for ride\n");
    }

    return 0;
}