#include <stdio.h>

int main(void)
{
  int x, result;

  printf("Enter a value for x: ");
  scanf("%d", &x);

  result = (3 * (x * x * x * x * x)) + (2 * (x * x * x * x)) - (5 * (x * x * x)) - (x * x) + (7 * x) - 6;

  printf("The result is %d", result);

  return 0;
}