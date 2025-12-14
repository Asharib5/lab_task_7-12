#include <stdio.h>
int main()
{
    int marks[2][3][3], total[2][3], i, j, k;
    int top_score_class1 = -1, top_student_class1 = -1;
    int top_score_class2 = -1, top_student_class2 = -1;
    int overall_top_score = -1, overall_top_class = -1, overall_top_student = -1;

    printf("Enter marks for 2 classes, 3 students each, and 3 subjects:\n");

    for (i = 0; i < 2; i++)
    {
        printf("\nEnter marks for Class %d\n", i + 1);
        for (j = 0; j < 3; j++)
        {
            total[i][j] = 0;
            printf("Student %d:\n", j + 1);
            for (k = 0; k < 3; k++)
            {
                printf("Enter marks for Subject %d: ", k + 1);
                scanf("%d", &marks[i][j][k]);
                total[i][j] += marks[i][j][k];
            }

            if (i == 0)
            {
                if (total[i][j] > top_score_class1)
                {
                    top_score_class1 = total[i][j];
                    top_student_class1 = j + 1;
                }
            }
            else
            {
                if (total[i][j] > top_score_class2)
                {
                    top_score_class2 = total[i][j];
                    top_student_class2 = j + 1;
                }
            }

            if (total[i][j] > overall_top_score)
            {
                overall_top_score = total[i][j];
                overall_top_class = i + 1;
                overall_top_student = j + 1;
            }
        }
    }

    printf("\nTop Performer of Class 1: Student %d with %d marks\n", top_student_class1, top_score_class1);
    printf("Top Performer of Class 2: Student %d with %d marks\n", top_student_class2, top_score_class2);
    printf("Overall Top Performer: Class %d Student %d with %d marks\n", overall_top_class, overall_top_student, overall_top_score);

    return 0;
}