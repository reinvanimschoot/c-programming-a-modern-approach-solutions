#include <stdio.h>

int main(void)
{
  int number_1, temp, number_2, gcd;

  printf("Enter two integers: ");
  scanf("%d %d", &number_1, &number_2);

  for (;;)
  {
    if (number_1 == 0)
    {
      gcd = number_2;
      break;
    }

    if (number_2 == 0)
    {
      gcd = number_1;
      break;
    }

    temp = number_2;

    number_2 = number_1 % number_2;

    number_1 = temp;
  }

  printf("Greatest common divisor: %d", gcd);

  return 0;
}