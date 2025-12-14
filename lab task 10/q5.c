#include <stdio.h>
#include <string.h>
int main () {
    char pass[50];

    printf("Enter password: ");
    scanf("%s", pass);

    int len = strlen(pass);
    int hasSpecial = strchr(pass, '@') || strchr(pass, '#') || strchr(pass, '!');

    if (len >= 8 && hasSpecial)
        printf("Strong\n");
    else if (len >= 6)
        printf("Medium\n");
    else
        printf("Weak\n");

    return 0;
}