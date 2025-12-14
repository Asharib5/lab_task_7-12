#include <stdio.h>
int main()
{
    int sales[4][5], i, j, price, high_price = 0, high_salesman = 0;
    int total[4] = {0};
    
    for (i = 0; i < 4; i++)
    {
        printf("Enter salesman %d sold product prices (5 prices):\n", i + 1);
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &sales[i][j]);
        }
    }
    
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            price = sales[i][j];
            total[i] += price;
            
            if (price > high_price)
            {
                high_price = price;
                high_salesman = i + 1;
            }
        }
        
        printf("Salesman %d total revenue: %d\n", i + 1, total[i]);
    }
    
    printf("Salesman %d sold the product with highest value: %d\n", high_salesman, high_price);
    
    return 0;
}