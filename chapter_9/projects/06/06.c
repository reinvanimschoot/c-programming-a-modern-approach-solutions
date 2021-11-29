#include <stdio.h>

int power(int x, int n);
int compute_polynomial(int x);

int main(void)
{
  int x;

  printf("Please provide a value for x: ");
  scanf("%d", &x);

  return compute_polynomial(x);
}

int power(int x, int n)
{
  return n == 1 ? x : (x * power(x, n - 1));
}

int compute_polynomial(int x)
{
  return (3 * power(x, 5)) + (2 * power(x, 4)) - (5 * power(x, 3)) - power(x, 2) + (7 * x) - 6;
}