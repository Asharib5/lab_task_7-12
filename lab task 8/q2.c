#include <stdio.h>
int main()
{
    int grid[3][3], i, j, invalid = 0;
    
    printf("Enter 9 number of sudoku box:\n");
    
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &grid[i][j]);
            
            if (grid[i][j] < 1 || grid[i][j] > 9)
            {
                invalid++;
            }
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }

    if (invalid > 0)
    {
        printf("Invalid Grid. (Out of 1-9 range)\n");
    }
    else
    {
        printf("Valid grid.\n");
    }

    return 0;
}