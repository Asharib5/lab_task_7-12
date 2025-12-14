#include <stdio.h>
#include <stdlib.h>

int main() {
    int Usage, code, rate = 0;
    float FinalBill = 0;
    char categoryName[20];

    printf("Enter monthly water usage in liters: ");
    scanf("%d", &Usage);

    printf("Enter category code (1-Home, 2-Office, 3-School, 4-Factory): ");
    scanf("%d", &code);

    switch (code) {
        case 1:
            rate = 1000;
            printf("Category: Home\n");
            break;
        case 2:
            rate = 1500;
            printf("Category: Office\n");
            break;
        case 3:
            rate = 800;
            printf("Category: School\n");
            break;
        case 4:
            rate = 2000;
            printf("Category: Factory\n");
            break;
        default:
            printf("Invalid category code!\n");
            return 1;
    }
    
    FinalBill = (float)Usage * (rate / 1000.0);
    
    if (Usage > 5000) {
        FinalBill += 500;
    }
    
    printf("Final Bill: %.2f PKR\n", FinalBill);

    return 0;
}