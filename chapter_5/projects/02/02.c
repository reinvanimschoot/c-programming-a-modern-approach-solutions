#include <stdio.h>

int main(void)
{
  int hours_in_24, minutes, hours_in_12;

  printf("Enter a 24-hour time: ");
  scanf("%2d:%2d", &hours_in_24, &minutes);

  hours_in_12 = (hours_in_24 == 12 || hours_in_24 == 0) ? 12 : hours_in_24 - 12;

  printf("Equivalent 12-hour time: %2.2d:%2.2d", hours_in_12, minutes);

  if (hours_in_24 >= 12)
    printf(" PM\n");
  else
    printf(" AM\n");

  return 0;
}