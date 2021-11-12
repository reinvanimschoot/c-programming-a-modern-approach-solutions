#include <stdio.h>

int main(void)
{
  float loan_amount, interest_rate, monthly_payment, monthly_interest_rate;
  int i, payments;

  printf("Enter amount of loan: ");
  scanf("%f", &loan_amount);

  printf("Enter interest rate: ");
  scanf("%f", &interest_rate);

  printf("Enter monthly payment: ");
  scanf("%f", &monthly_payment);

  printf("Enter number of payments you want to see: ");
  scanf("%d", &payments);

  for (i = 1; i <= payments; i++)
  {
    loan_amount = loan_amount - monthly_payment + (loan_amount * interest_rate / 100.0 / 12.0);
    printf("Balance remaining after payment %d: $%.2f\n", i, loan_amount);
  }

  return 0;
}