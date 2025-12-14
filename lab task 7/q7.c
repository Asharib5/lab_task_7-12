#include <stdio.h>
int main()
{
    int mileage[8], i, need = 0;
    
    for(i=0; i<8; i++)
    {
        printf("Enter mileage of car %d: ", i+1);
        scanf("%d", &mileage[i]);
        
        if(mileage[i] >= 18)
        {
            printf("Efficient.\n");
        }
        else if (mileage[i] > 12 && mileage[i] < 18)
        {
            printf("Average\n");
        }
        else if (mileage[i] <= 12)
        {
            printf("Needs Maintainance.\n");
            need = need + 1;
        }
    }
    
    printf("\nCar\t\tMilage\n");
    printf("--------------------\n");
    for(i=0; i<8; i++)
    {
        printf("%d\t\t%d\n", i+1, mileage[i]);
    }
    printf("--------------------\n");

    if (need > 3)
    {
        printf("Fleet Efficiency Alert!\n");
    }
    return 0;
}