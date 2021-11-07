#include <stdio.h>

int main(void)
{
  int number, digit_1, remainder, digit_2, digit_3;

  printf("Enter a three-digit number:");
  scanf("%d", &number);

  digit_1 = number / 100;

  remainder = number % 100;

  digit_2 = remainder / 10;
  digit_3 = remainder % 10;

  printf("The reversal is: %d%d%d", digit_3, digit_2, digit_1);

  return 0;
}