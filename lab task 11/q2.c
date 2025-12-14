#include <stdio.h>

struct Loan {
    char name[20];
    double amount;
    double rate;
    double months;
    double monthly;
};

double pay(struct Loan *l, int n) {
    if (n == 0) return l->amount;
    double prev_bal = pay(l, n - 1);
    double interest = prev_bal * l->rate;
    return prev_bal + interest - l->monthly;
}

int main() {
    struct Loan l;
    printf("Enter Loan Details: Name, Amount, Rate, Months, and Monthly Repayments\n");
    scanf("%s %lf %lf %lf %lf", l.name, &l.amount, &l.rate, &l.months, &l.monthly);
    
    printf("%.1lf\n", pay(&l, (int)l.months));
    
    return 0;
}