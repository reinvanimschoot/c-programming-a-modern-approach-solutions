#include <stdio.h>

int power(int x, int n);

int main(void)
{
  int x, n;

  printf("Please enter x: ");
  scanf("%d", &x);

  printf("Please enter n: ");
  scanf("%d", &n);

  printf("Result: %d", power(x, n));

  return 0;
}

int power(int x, int n)
{
  if (n == 0)
    return 1;
  else if (n % 2 == 0)
    return power(x, n / 2) * power(x, n / 2);
  else
    return x * power(x, n - 1);
}
