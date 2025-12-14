#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char title[50];
    char id[20];
    char user[20];
    int due;
} Log;

int main() {
    int n;

    printf("Enter number of checkouts: ");
    scanf("%d", &n);

    Log *a = (Log*)malloc(n * sizeof(Log));

    FILE *f = fopen("checkout_log.csv", "a");

    for (int i = 0; i < n; i++) {
        printf("Enter title, ID, user, due_days (e.g. Book1 101 John 7): ");
        scanf("%s %s %s %d", a[i].title, a[i].id, a[i].user, &a[i].due);
        fprintf(f, "%s, %s, %s, %d\n", a[i].title, a[i].id, a[i].user, a[i].due);
    }

    fclose(f);
    free(a);
    
    return 0;
}