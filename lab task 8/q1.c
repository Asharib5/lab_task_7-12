#include <stdio.h>
int main()
{
    int seat[10][4], i, j, fullrow = 0;
    printf("Enter seat for reservation.\n0 = available \n1 = reserved\n");
    
    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("Seat %d: ", i * 4 + j + 1);
            scanf("%d", &seat[i][j]);
        }
    }
    
    printf("\nSeat map.\n");
    for(i = 0; i < 10; i++)
    {
        int count = 0;
        for(j = 0; j < 4; j++)
        {
            printf("%d ", seat[i][j]);
            if (seat[i][j] == 1) 
            {
                count++;
            }
        }
        printf("\n");
        
        if(count == 4) 
        {
            fullrow = fullrow + 1;
        }
    }
    
    printf("Number of rows full: %d\n", fullrow);
    return 0;
}