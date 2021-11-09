/* Computes a Universal Product Code check digit */

#include <stdio.h>

int main(void)
{
  int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, first_sum, second_sum, total, check_digit;

  printf("Enter UPC digits: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11);

  first_sum = n1 + n3 + n5 + n7 + n9 + n11;
  second_sum = n2 + n4 + n6 + n8 + n10;

  total = (3 * first_sum) + second_sum;

  check_digit = 9 - ((total - 1) % 10);

  if (check_digit == n12)
    printf("VALID");
  else
    printf("INVALID");

  return 0;
}