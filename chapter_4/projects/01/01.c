#include <stdio.h>

int main(void)
{
  int number, digit_1, digit_2;

  printf("Enter a two-digit number:");
  scanf("%d", &number);

  digit_1 = number / 10;
  digit_2 = number % 10;

  printf("The reversal is: %d%d", digit_2, digit_1);

  return 0;
}