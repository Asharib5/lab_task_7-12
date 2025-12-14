#include <stdio.h>
int main()
{
    int status[15], delay[15], fine[15];
    int i, totalfine = 0;
    printf("Enter payment status (0 = not paid, 1 = paid) for 15 students:\n");
    for (i=0; i<15; i++)
    {
        scanf("%d", &status[i]);
    }
    printf("Enter delay in months for each student:\n");
    for (i=0; i<15; i++)
    {
        scanf("%d", &delay[i]);
    }
    printf("\nNo.\tStatus\tFine\tRemark\n");
    for (i=0; i<15; i++)
    {
        if (status[i] == 1)
        {
            fine[i] = 0;
            printf("%d\tPaid\t%d\tCleared\n", i+1, fine[i]);
        }
        else
        {
            if (delay[i] <= 13)
                fine[i] = 500;
            else if (delay[i] <= 20)
                fine[i] = 1000;
            else
                fine[i] = 1500; 
            
            totalfine += fine[i];
            printf("%d\tUnpaid\t%d\tDefaulter\n", i+1, fine[i]);
        }
    }
    printf("\nTotal fine collected: Rs. %d\n", totalfine);
    return 0;
}