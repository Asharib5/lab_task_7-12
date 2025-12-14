#include <stdio.h>
int main()
{
    int temp[4][3][3], i, j, k;
    int sum[4] = {0};
    int hot_temp = 0, hot_layer = 0, hot_row = 0, hot_col = 0;

    printf("Enter temperature at certain points:\n");

    for (k = 0; k < 4; k++)
    {
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                scanf("%d", &temp[k][i][j]);
                sum[k] += temp[k][i][j];
                
                if (temp[k][i][j] > hot_temp)
                {
                    hot_temp = temp[k][i][j];
                    hot_layer = k + 1;
                    hot_row = i + 1;
                    hot_col = j + 1;
                }
            }
        }
    }
    
    for (k = 0; k < 4; k++)
    {
        printf("Sum of layer %d: %d\n", k + 1, sum[k]);
    }

    printf("Hottest temp: %d at coordinates (%d, %d, %d)\n", hot_temp, hot_layer, hot_row, hot_col);
    printf("Hottest layer: %d\n", hot_layer);

    return 0;
}