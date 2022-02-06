#include <stdio.h>

int main(void)
{
  int magic_square_side = 0;
  int max_side_index, row, col, next_row, next_col;
  int square[99][99] = {0};

  printf("Enter size of magic square: ");
  scanf("%d", &magic_square_side);

  max_side_index = magic_square_side - 1;
  row = 0;
  col = max_side_index / 2;

  for (int i = 1; i < (magic_square_side * magic_square_side) + 1; i++)
  {
    square[row][col] = i;

    next_row = (row) ? row - 1 : max_side_index;
    next_col = (col == max_side_index) ? 0 : col + 1;

    if (square[next_row][next_col] != 0)
      row = (row == max_side_index) ? 0 : row + 1;
    else
    {
      row = next_row;
      col = next_col;
    }
  }

  for (int r = 0; r < magic_square_side; r++)
  {
    for (int c = 0; c < magic_square_side; c++)
      printf("%5d", square[r][c]);

    printf("\n");
  }

  return 0;
}