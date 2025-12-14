#include <stdio.h>

int main() {
    int iid = 0, id, i, digit;

    printf("Enter your student id : ");
    scanf("%d", &id);

    if (id > 999 && id < 10000) {
        for (i = 0; i < 4; i++) {
            digit = id % 10;
            iid = iid * 10 + digit;
            id = id / 10;
        }
        printf("%d\n", iid);
    } else {
        printf("Invalid id.\n");
    }

    return 0;
}