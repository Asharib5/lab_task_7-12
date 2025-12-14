#include <stdio.h>
int main() {
    int ride;
    char dis;

    printf("Enter ride type: 1 Economy, 2 Business, 3 Luxury:\n");
    scanf("%d", &ride);

    switch (ride) {
        case 1:
            printf("Distance short or long (s for short and l for long):\n");
            scanf(" %c", &dis);
            if (dis == 's') {
                printf("Fare is 100\n");
            } else if (dis == 'l') {
                printf("Fare is 200\n");
            }
            break;
        case 2:
            printf("Distance short or long (s for short and l for long):\n");
            scanf(" %c", &dis);
            if (dis == 's') {
                printf("Fare is 300\n");
            } else if (dis == 'l') {
                printf("Fare is 400\n");
            }
            break;
        case 3:
            printf("Luxury ride selected. Base fare is 500\n");
            break;
        default:
            printf("Invalid ride type\n");
            break;
    }
    return 0;
}