#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_DIGITS 10

int digits[3][MAX_DIGITS * 4];
int segments[10][7] = {
    {1, 1, 1, 1, 1, 1, 0},
    {0, 1, 1, 0, 0, 0, 0},
    {1, 1, 0, 1, 1, 0, 1},
    {1, 1, 1, 1, 0, 0, 1},
    {0, 1, 1, 0, 0, 1, 1},
    {1, 0, 1, 1, 0, 1, 1},
    {1, 0, 1, 1, 1, 1, 1},
    {1, 1, 1, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 0, 1, 1},
};

void clear_digits_array(void);
void print_digits(void);
void process_digit(int digit, int position);

int main(void)
{
  int d = 0;
  char c;

  clear_digits_array();

  printf("Enter a number: ");

  while ((c = getchar()) != '\n')
  {
    if (isdigit(c))
    {
      process_digit(atoi(&c), d++);
      if (d == 10)
        break;
    }
  }

  print_digits();

  return 0;
}

void clear_digits_array(void)
{
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < (MAX_DIGITS * 4); j++)
      digits[i][j] = 0;
}

void print_digits(void)
{
  for (int j = 0; j < (MAX_DIGITS * 4); j++)
    digits[0][j] ? putchar('_') : putchar(' ');

  putchar('\n');

  for (int j = 0; j < (MAX_DIGITS * 4); j++)
    if (digits[1][j])
      (j % 2) ? putchar('_') : putchar('|');
    else
      putchar(' ');
  putchar('\n');

  for (int j = 0; j < (MAX_DIGITS * 4); j++)
    if (digits[2][j])
      (j % 2) ? putchar('_') : putchar('|');
    else
      putchar(' ');
  putchar('\n');
}

void process_digit(int digit, int position)
{
  int col_position = position * 4;

  digits[0][col_position + 1] = segments[digit][0];

  digits[1][col_position] = segments[digit][5];
  digits[1][col_position + 1] = segments[digit][6];
  digits[1][col_position + 2] = segments[digit][1];

  digits[2][col_position] = segments[digit][4];
  digits[2][col_position + 1] = segments[digit][3];
  digits[2][col_position + 2] = segments[digit][2];
}
