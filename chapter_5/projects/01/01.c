#include <stdio.h>

int main(void)
{
  int number, digit_amount;

  printf("Enter a number:");
  scanf("%d", &number);

  if (number < 10)
    digit_amount = 1;
  else if (number < 100)
    digit_amount = 2;
  else if (number < 1000)
    digit_amount = 3;
  else
    digit_amount = 4;

  printf("The number %d has %d digit(s).", number, digit_amount);

  return 0;
}