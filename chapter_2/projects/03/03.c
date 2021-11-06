#include <stdio.h>

int main(void)
{
  int radius;
  float volume;

  printf("Provide the radius of the sphere in meters: ");
  scanf("%d", &radius);

  volume = (4.0f / 3.0f) * 3.141592 * (radius * radius * radius);

  printf("The volume of a shpere with a %d-meter radius is: %f", radius, volume);

  return 0;
}