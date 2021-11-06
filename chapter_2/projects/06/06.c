#include <stdio.h>

int main(void)
{
  int x, result;

  printf("Enter a value for x: ");
  scanf("%d", &x);

  result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

  printf("The result is %d", result);

  return 0;
}