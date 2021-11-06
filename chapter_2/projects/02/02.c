#include <stdio.h>

int main(void)
{
  int radius;
  float volume;

  radius = 10;

  volume = (4.0f / 3.0f) * 3.141592 * (radius * radius * radius);

  printf("The volume of a shpere with a 10-meter radius is: %f", volume);

  return 0;
}