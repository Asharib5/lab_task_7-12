#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int check(char *s, int i) {
    if (s[i] == '\0') return 1;
    if (!isdigit(s[i])) return 0;
    return check(s, i + 1);
}

typedef struct {
    char name[50];
    char roll[20];
    int seat;
} Seat;

int main() {
    int n, add;

    printf("Students: ");
    scanf("%d", &n);

    Seat *s = (Seat*)malloc(n * sizeof(Seat));

    for (int i = 0; i < n; i++) {
        printf("Enter name, roll, seat (e.g. John 25K-2013 1): ");
        scanf("%s %s %d", s[i].name, s[i].roll, &s[i].seat);
        while (check(s[i].roll, 0) == 0) {
            printf("Invalid roll number. Enter roll again: ");
            scanf("%s", s[i].roll);
        }
    }

    printf("Add more: ");
    scanf("%d", &add);

    s = (Seat*)realloc(s, (n + add) * sizeof(Seat));

    for (int i = n; i < n + add; i++) {
        printf("Enter name, roll, seat (e.g. Mike 25K-2014 5): ");
        scanf("%s %s %d", s[i].name, s[i].roll, &s[i].seat);
        while (check(s[i].roll, 0) == 0) {
            printf("Invalid roll number. Enter roll again: ");
            scanf("%s", s[i].roll);
        }
    }
    n += add;

    FILE *f = fopen("seating.txt", "w");
    for (int i = 0; i < n; i++) {
        fprintf(f, "%s %s %d\n", s[i].name, s[i].roll, s[i].seat);
    }
    fclose(f);
    free(s);

    return 0;
}