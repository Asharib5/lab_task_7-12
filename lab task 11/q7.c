#include <stdio.h>

int maxTip(int tips[], int n, int i) {
    if (i >= n) return 0;
    int take = tips[i] + maxTip(tips, n, i + 2);
    int skip = maxTip(tips, n, i + 1);
    return (take > skip) ? take : skip;
}

int main() {
    int n;
    printf("Enter number of stops: ");
    scanf("%d", &n);
    
    int tips[n];
    printf("Enter tip amounts for each stop:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &tips[i]);
    }
    
    int result = maxTip(tips, n, 0);
    
    printf("Maximum tip the rider can collect: %d\n", result);
    return 0;
}