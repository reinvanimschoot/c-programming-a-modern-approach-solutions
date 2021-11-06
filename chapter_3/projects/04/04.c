#include <stdio.h>

int main(void)
{
  int phone_number_group_1, phone_number_group_2, phone_number_group_3;

  printf("Enter phone number: [(xxx) xxx-xxxx]: ");
  scanf("(%d )%d -%d", &phone_number_group_1, &phone_number_group_2, &phone_number_group_3);

  printf("You entered %d.%d.%d", phone_number_group_1, phone_number_group_2, phone_number_group_3);

  return 0;
}