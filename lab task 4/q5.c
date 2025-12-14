#include <stdio.h>
int main() {
    int Usage, Fine = 0;
    
    printf("Enter the monthly water usage in liters: ");
    scanf("%d", &Usage);

    if (Usage > 5000) {
        Fine = 1000;
        printf("Fine of 1000 PKR applied for excessive usage.\n");
    }
    
    printf("Final Bill: %d PKR\n", 2000 + Fine);
    
    if (Fine > 0) {
        printf("Total payment includes fine.\n");
    }
    return 0;
}