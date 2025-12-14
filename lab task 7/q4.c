#include <stdio.h>
int main()
{
    int units[10], i, bill[10], total = 0;
    int high = 0; 

    for(i=0; i<10; i++)
    {
        printf("Enter units used: ");
        scanf("%d", &units[i]);

        if(units[i] <= 200)
        {
            bill[i] = units[i] * 15;
        }
        else if (units[i] <= 500)
        {
            bill[i] = units[i] * 20;
        }
        else if(units[i] <= 700)
        {
            bill[i] = units[i] * 25;
        }
        else 
        {
            bill[i] = units[i] * 25;
            high++;
        }
        
        total += bill[i];
    }

    printf("\nHouse\tUnits\tBill\tConsumption\n");
    printf("--------------------------------\n");
    for(i=0; i<10; i++)
    {
        if(units[i] > 700)
            printf("%d\t\t%d\t%d\tHigh\n", i+1, units[i], bill[i]);
        else
            printf("%d\t\t%d\t%d\tNormal\n", i+1, units[i], bill[i]);
    }
    printf("Total revenue: %d\n", total);
    return 0;
}