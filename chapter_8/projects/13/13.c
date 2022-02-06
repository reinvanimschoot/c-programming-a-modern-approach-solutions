#include <stdio.h>

int main(void)
{
  char initial, c;
  char last_name[20] = {0};
  int index = 0;

  printf("Enter a first and last name: ");

  while ((c = getchar()) == ' ')
    ;

  initial = c;

  while ((c = getchar()) != ' ')
    ;

  for (int i = 0; (c = getchar()) != '\n'; i++)
    last_name[i] = c;

  printf("You entered the name: ");

  for (int i = 0; last_name[i] != '\0'; i++)
    putchar(last_name[i]);

  printf(", %c.\n", initial);

  return 0;
}
