#include <stdio.h>
int main()
{
    int data[3][3], key[3][3], i, j;
    int max_enc_val = 0, x = -1, y = -1;
    int enc_mat[3][3];

    printf("Enter data (9 elements for 3x3 matrix):\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &data[i][j]);
        }
    }

    printf("Enter key (9 elements for 3x3 matrix):\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &key[i][j]);
        }
    }

    printf("\nEncrypted matrix.\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            enc_mat[i][j] = data[i][j] * key[i][j] + (i+1) * (j+1);
            
            printf("%d ", enc_mat[i][j]);

            if (enc_mat[i][j] > max_enc_val)
            {
                max_enc_val = enc_mat[i][j];
                x = i + 1;
                y = j + 1;
            }
        }
        printf("\n");
    }

    printf("Cell (%d, %d) has max encrypted value = %d\n", x, y, max_enc_val);
    return 0;
}