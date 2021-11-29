#include <stdio.h>

float compute_income_tax(float taxable_amount);

int main(void)
{
  float taxable_amount, income_tax;

  printf("Please enter the taxable amount: ");
  scanf("%f", &taxable_amount);

  printf("The tax due is: %.2f", compute_income_tax(taxable_amount));
}

float compute_income_tax(float taxable_amount)
{
  float income_tax;

  if (taxable_amount < 750.0f)
    income_tax = taxable_amount * .01f;
  else if (taxable_amount < 2250.00f)
    income_tax = 7.50f + ((taxable_amount - 750.00f) * .02f);
  else if (taxable_amount < 3750.00f)
    income_tax = 37.50f + ((taxable_amount - 2250.00f) * .03f);
  else if (taxable_amount < 5250.00f)
    income_tax = 82.50f + ((taxable_amount - 3750.00f) * .04f);
  else if (taxable_amount < 7000.00f)
    income_tax = 142.50f + ((taxable_amount - 5250.00f) * .05f);
  else
    income_tax = 230.50f + ((taxable_amount - 7000.00f) * .06f);

  return income_tax;
}
