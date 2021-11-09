#include <stdio.h>

int main(void)
{
  int windspeed;

  printf("Enter windspeed in knots:");
  scanf("%d", &windspeed);

  if (windspeed < 1)
    printf("Windspeed is currently categorized as Calm.");
  else if (windspeed < 4)
    printf("Windspeed is currently categorized as Light air.");
  else if (windspeed < 28)
    printf("Windspeed is currently categorized as Breeze.");
  else if (windspeed < 28)
    printf("Windspeed is currently categorized as Breeze.");

  return 0;
}