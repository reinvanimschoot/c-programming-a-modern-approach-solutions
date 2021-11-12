#include <stdio.h>

int main(void)
{
  float max, number;

  max = 0;

  while (number != 0)
  {
    printf("Enter a number:");
    scanf("%f", &number);

    if (number > max)
    {
      max = number;
    }
  }

  printf("The largest number entered was %.2f", max);

  return 0;
}