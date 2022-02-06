#include <stdio.h>
#include <ctype.h>

int main(void)
{
  char c;
  int values[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
  int value = 0;
  int index = 0;

  printf("Enter a word: ");

  while ((c = getchar()) != '\n')
  {
    index = toupper(c) - 'A';
    value += values[index];
  }

  printf("Scrabble value: %d\n", value);
}
