#include <stdio.h>

struct Person {
    char name[20];
    int age;
};

struct Student {
    struct Person p;
    int credit[5];
    int rate;
};

int fee(struct Student *s, int n) {
    if (n == 0) {
        return 0;
    }
    return fee(s, n - 1) + s->credit[n - 1] * s->rate;
}

int main() {
    struct Student s;
    int i;
    printf("Enter Students Name, Age and Rate Per Credit\n");
    scanf("%s %d %d", s.p.name, &s.p.age, &s.rate);
    printf("Enter Credit Hours (5)\n");
    
    for (i = 0; i < 5; i++) {
        scanf("%d", &s.credit[i]);
    }
    
    printf("%d\n", fee(&s, 5));
    
    return 0;
}