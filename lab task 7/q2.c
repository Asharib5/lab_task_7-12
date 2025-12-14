#include <stdio.h>
int main()
{
    int ward[7], i, total = 0;
    printf("Enter number of patients for 7 wards:");
    for (i=0; i<7; i++)
    {
        scanf("%d", &ward[i]);
        total += ward[i];
    }
    for (i=0; i<7; i++)
    {
        if (ward[i] > 10)
            printf("Ward %d: Overcrowded\n", i+1);
        else if (ward[i] >= 6)
            printf("Ward %d: Stable\n", i+1);
        else
            printf("Ward %d: Underutilized\n", i+1);
    }
    printf("\nTotal patients: %d\n", total);
    return 0;
}