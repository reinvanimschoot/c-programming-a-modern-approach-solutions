/* Calculates a broker's commission */

#include <stdio.h>

int main(void)
{
  float commission, rival_commission, total_trade_value, shares_amount, shares_value;

  printf("Enter the amount of shares traded: ");
  scanf("%f", &shares_amount);

  printf("Enter the value per share: ");
  scanf("%f", &shares_value);

  total_trade_value = shares_amount * shares_value;

  if (shares_amount < 2000)
    rival_commission = 33.00f + .03f * shares_amount;
  else
    rival_commission = 33.00f + .02f * shares_amount;

  if (total_trade_value < 2500.00f)
    commission = 30.00f + .017f * total_trade_value;
  else if (total_trade_value < 6250.00f)
    commission = 56.00f + .0066f * total_trade_value;
  else if (total_trade_value < 20000.00f)
    commission = 76.00f + .0034f * total_trade_value;
  else if (total_trade_value < 50000.00f)
    commission = 100.00f + .0022f * total_trade_value;
  else if (total_trade_value < 500000.00f)
    commission = 155.00f + .0011f * total_trade_value;
  else
    commission = 255.00f + .0009f * total_trade_value;

  if (commission < 39.00f)
    commission = 39.00f;

  printf("Commission: $%.2f\n", commission);
  printf("Rival Commission: $%.2f\n", rival_commission);

  return 0;
}