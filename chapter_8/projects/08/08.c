#include <stdio.h>

#define STUDENTS 5
#define QUIZ_GRADES 5

int main(void)
{
    int matrix[STUDENTS][QUIZ_GRADES], i, j, highest, lowest, total;

    for (i = 0; i < STUDENTS; i++)
    {
        printf("Enter quiz grades for student %d: ", i + 1);

        for (j = 0; j < QUIZ_GRADES; j++)
            scanf("%d", &matrix[i][j]);
    }

    printf("\nScores per student:\n");
    for (i = 0; i < STUDENTS; i++)
    {
        printf("Student %d - ", i + 1);

        for (total = 0, j = 0; j < QUIZ_GRADES; j++)
        {
            total += matrix[i][j];
        }

        printf("Total: %d | Average: %.2f\n", total, (float)total / 5.00f);
    }

    printf("\nScores per quiz:\n");
    for (i = 0; i < QUIZ_GRADES; i++)
    {
        printf("Quiz %d - ", i + 1);

        for (highest = matrix[i][0], lowest = matrix[i][0], total = 0, j = 0; j < STUDENTS; j++)
        {
            if (matrix[j][i] > highest)
                highest = matrix[j][i];

            if (matrix[j][i] < lowest)
                lowest = matrix[j][i];

            total += matrix[j][i];
        }

        printf("Highest score: %2d | Lowest score: %2d | Average: %.2f\n", highest, lowest, (float)total / 5.00f);
    }

    return 0;
}
