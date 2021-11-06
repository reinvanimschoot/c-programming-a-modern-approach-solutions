#include <stdio.h>

int main(void)
{
  int dollar_amount, bills_of_twenty, bills_of_ten, bills_of_five, bills_of_one;

  printf("Enter a dollar amount: ");
  scanf("%d", &dollar_amount);

  bills_of_twenty = dollar_amount / 20;
  dollar_amount -= (bills_of_twenty * 20);

  bills_of_ten = dollar_amount / 10;
  dollar_amount -= (bills_of_ten * 10);

  bills_of_five = dollar_amount / 5;
  dollar_amount -= (bills_of_five * 5);

  bills_of_one = dollar_amount / 1;

  printf("$20 bills: %d\n", bills_of_twenty);
  printf("$10 bills: %d\n", bills_of_ten);
  printf("$5 bills: %d\n", bills_of_five);
  printf("$1 bills: %d\n", bills_of_one);

  return 0;
}