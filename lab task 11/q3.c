#include <stdio.h>

struct Patient {
    char name[30];
    int age;
    int healthScore;
};

struct DailyReport {
    int day;
    int scoreChange;
};

int finalScore(struct Patient *p, struct DailyReport reports[], int n) {
    if (n == 0) return p->healthScore;
    int prev = finalScore(p, reports, n - 1);
    return prev + reports[n - 1].scoreChange;
}

int main() {
    struct Patient p;
    struct DailyReport reports[10];
    int n;

    printf("Enter patient name, age, and initial health score:\n");
    scanf("%s %d %d", p.name, &p.age, &p.healthScore);
    
    printf("Enter number of days: \n");
    scanf("%d", &n);

    printf("Enter daily reports (day scoreChange):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &reports[i].day, &reports[i].scoreChange);
    }

    int result = finalScore(&p, reports, n);
    
    printf("Final health score after %d days = %d\n", n, result);
    
    return 0;
}