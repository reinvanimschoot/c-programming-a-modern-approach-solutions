#include <stdio.h>
#include <stdlib.h> /* srand(), rand() */
#include <time.h>   /* time() */

typedef int Bool;

#define SIDE 10
#define DIRECTIONS 4

int main(void)
{
    char board[SIDE][SIDE];
    char letters[26];

    int direction, i, j, row = 0, col = 0;
    Bool up_untried = 1, right_untried = 1, down_untried = 1, left_untried = 1;

    for (i = 0; i < (int)(sizeof(letters) / sizeof(letters[0])); i++)
        letters[i] = 'A' + i;

    for (i = 0; i < SIDE; i++)
    {
        for (j = 0; j < SIDE; j++)
            board[i][j] = '.';
    }

    srand((unsigned)time(NULL));

    for (i = 0; i < (int)(sizeof(letters) / sizeof(letters[0])) && (up_untried || right_untried || down_untried || left_untried);)
    {
        board[row][col] = letters[i];

        direction = rand() % DIRECTIONS;

        if (direction == 0)
        {
            if (row - 1 >= 0 && board[row - 1][col] == '.')
                row -= 1;
            else
            {
                up_untried = 0;
                continue;
            }
        }

        if (direction == 1)
        {
            if (col + 1 < 10 && board[row][col + 1] == '.')
                col += 1;
            else
            {
                right_untried = 0;
                continue;
            }
        }

        if (direction == 2)
        {
            if (row + 1 >= 0 && board[row + 1][col] == '.')
                row += 1;
            else
            {
                down_untried = 0;
                continue;
            }
        }

        if (direction == 3)
        {
            if (col - 1 >= 0 && board[row][col - 1] == '.')
                col -= 1;
            else
            {
                left_untried = 0;
                continue;
            }
        }

        i++;
        up_untried = 1;
        right_untried = 1;
        down_untried = 1;
        left_untried = 1;
    }

    for (i = 0; i < SIDE; i++)
    {
        for (j = 0; j < SIDE; j++)
            printf("%c", board[i][j]);

        printf("\n");
    }

    return 0;
}
