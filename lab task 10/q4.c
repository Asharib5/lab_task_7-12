#include <stdio.h>
#include <string.h>
int main () {
    char guests[10][50];
    int rooms[10];
    int n;

    printf("How many guests? ");
    scanf("%d", &n);

    FILE *f = fopen("hotel.txt", "w");

    for (int i = 0; i < n; i++) {
        printf("Enter guest name: ");
        scanf("%s", guests[i]);
        printf("Enter room number: ");
        scanf("%d", &rooms[i]);

        fprintf(f, "%s %d\n", guests[i], rooms[i]);
    }
    fclose(f);

    char search[50];
    printf("Enter name to search: ");
    scanf("%s", search);

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(search, guests[i]) == 0) {
            printf("Room number: %d\n", rooms[i]);
            found = 1;
            break;
        }
    }

    if (!found) printf("Guest not found.\n");

    return 0;
}