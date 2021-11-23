#include <stdio.h>

#define MAX_COL 5
#define MAX_ROW 5

int main(void)
{
    int matrix[MAX_ROW][MAX_COL], i, j, total;

    for (i = 0; i < MAX_ROW; i++)
    {
        printf("Enter row %d: ", i + 1);

        for (j = 0; j < MAX_COL; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nRow totals:");
    for (i = 0; i < MAX_ROW; i++)
    {

        for (total = 0, j = 0; j < MAX_COL; j++)
        {
            total += matrix[i][j];
        }

        printf(" %d", total);
    }

    printf("\nColumn totals:");
    for (i = 0; i < MAX_COL; i++)
    {

        for (total = 0, j = 0; j < MAX_COL; j++)
        {
            total += matrix[j][i];
        }

        printf(" %d", total);
    }

    return 0;
}
