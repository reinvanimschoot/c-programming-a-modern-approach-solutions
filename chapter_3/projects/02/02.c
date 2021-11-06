#include <stdio.h>

int main(void)
{
  int item_number, purchase_date_month, purchase_date_day, purchase_date_year;
  float unit_price;

  printf("Enter item number: ");
  scanf("%d", &item_number);

  printf("Enter unit price: ");
  scanf("%f", &unit_price);

  printf("Enter purchase date (mm/dd/yyy): ");
  scanf("%d /%d /%d", &purchase_date_month, &purchase_date_day, &purchase_date_year);

  printf("\nItem\t\tUnit\t\tPurchase\n");
  printf("\t\tPrice\t\tDate\n");
  printf("%-10d\t$%7.2f\t%.2d/%.2d/%.4d", item_number, unit_price, purchase_date_month, purchase_date_day, purchase_date_year);

  return 0;
}