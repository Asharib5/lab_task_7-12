#include <stdio.h>
int main() {
    int cap[] = {5, 7, 9};
    int flight0[] = {0}, flight1[] = {0}, flight2[] = {0};
    int *flights[] = {flight0, flight1, flight2};
    int capacities[3];
    for (int i = 0; i < 3; ++i) capacities[i] = cap[i];

    int choice;
    while (1) {
        printf("\n1-Book 2-Cancel 3-Show totals 0-Exit: ");
        if (scanf("%d", &choice) != 1) break;
        if (choice == 0) break;

        int f, seat;
        if (choice == 1) {
            printf("Which flight (0,1,2) ? ");
            scanf("%d", &f);
            printf("Which seat index (0 to %d) ? ", capacities[f]-1);
            scanf("%d", &seat);

            if (seat < 0 || seat >= capacities[f]) {printf("Invalid seat\n"); continue;}
            if (flights[f][seat] == 1) printf("Already booked\n"); else {flights[f][seat] = 1; printf("Booked\n");}
        } else if (choice == 2) {
            printf("Which flight (0,1,2) ? ");
            scanf("%d", &f);
            printf("Which seat index (0 to %d) ? ", capacities[f]-1);
            scanf("%d", &seat);

            if (seat < 0 || seat >= capacities[f]) {printf("Invalid seat\n"); continue;}
            if (flights[f][seat] == 0) printf("Seat not booked\n"); else {flights[f][seat] = 0; printf("Canceled\n");}
        } else if (choice == 3) {
            for (int i = 0; i < 3; ++i) {
                int occ = 0;
                for (int s = 0; s < capacities[i]; s++) occ += flights[i][s];
                printf("Flight %d: occupied seats = %d / %d\n", i + 1, occ, capacities[i]);
            }
        }
    }
    return 0;
}