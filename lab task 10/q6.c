#include <stdio.h>
#include <string.h>
int main () {
    char books[10][50];
    char search[50];

    printf("Enter 10 book titles:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%s", books[i]);
    }

    printf("Enter title to search: ");
    scanf("%s", search);

    for (int i = 0; i < 10; i++) {
        if (strcmp(search, books[i]) == 0) {
            printf("Book Found\n");
            return 0;
        }
    }

    printf("Book Not Found\n");

    return 0;
}