#include <stdio.h>

struct Weather {
    char city[20];
    double base;
    double cool;
};

double T(double base, double cool, int n) {
    if (n == 0) return base;
    double prev = T(base, cool, n - 1);
    return prev + cool;
}

int main() {
    struct Weather W;
    printf("Enter Weather Deatails for a City, Name, Base Temp, Cooling Factor \n");
    scanf("%s %lf %lf", W.city, &W.base, &W.cool);
    
    printf("%.1lf\n", T(W.base, W.cool, 5));
    
    return 0;
}