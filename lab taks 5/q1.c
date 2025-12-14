#include <stdio.h>
int main() {
    int age, bal;

    printf("enter age:\n");
    scanf("%d", &age);

    printf("enter bal:\n");
    scanf("%d", &bal);

    if (age < 21 || bal < 200) {
        printf("not eligible");
    } else {
        printf("eligible");
    }
    return 0;
}