#include <stdio.h>
#include <string.h>
int main () {
    char names[5][50];
    char attendance[5][10];
    FILE *file;

    for (int i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        fgets(names[i], 50, stdin);
        names[i][strcspn(names[i], "\n")] = '\0';
    }

    char temp;
    for (int i = 0; i < 5; i++) {
        printf("Is %s present? (P/A): ", names[i]);
        scanf(" %c", &temp);
        if (temp == 'p' || temp == 'P') {
            strcpy(attendance[i], "Present");
        } else {
            strcpy(attendance[i], "Absent");
        }
    }

    file = fopen("attendance.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        fprintf(file, "%s: %s\n", names[i], attendance[i]);
    }
    fclose(file);

    printf("\nAttendance record:\n");

    file = fopen("attendance.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    
    char line[100];
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }
    fclose(file);

    return 0;
}