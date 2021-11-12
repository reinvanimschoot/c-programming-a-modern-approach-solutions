#include <stdio.h>

int main(void)
{
  int numerator, denominator, a, b, temp, gcd;

  printf("Enter a fraction: ");
  scanf("%d/%d", &numerator, &denominator);

  a = numerator;
  b = denominator;

  for (;;)
  {
    if (a == 0)
    {
      gcd = b;
      break;
    }

    if (b == 0)
    {
      gcd = a;
      break;
    }

    temp = b;

    b = a % b;

    a = temp;
  }

  printf("In lowest terms: %d/%d", numerator / gcd, denominator / gcd);

  return 0;
}