#include <stdio.h>

int main(void)
{
  float amount, amount_with_tax;

  printf("Enter an amount: ");
  scanf("%f", &amount);

  amount_with_tax = (amount * 1.05);

  printf("With tax added: $%.2f", amount_with_tax);

  return 0;
}