#include <stdio.h>
int main() {
    int license, fine;

    printf("Enter license status (1 for valid, 0 for invalid): ");
    scanf("%d", &license);

    printf("Enter fine status (1 for unpaid, 0 for clear): ");
    scanf("%d", &fine);

    if (license == 1 && fine == 0) {
        printf("Eligible for ride\n");
    } else {
        printf("Not eligible due to invalid license or unpaid fine\n");
    }
    return 0;
}