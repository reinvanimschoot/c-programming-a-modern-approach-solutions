#include <stdio.h>

int main(void)
{
  int num_1, num_2, num_3, num_4, max, min;

  printf("Please enter 4 integers: ");
  scanf("%d %d %d %d", &num_1, &num_2, &num_3, &num_4);

  if (num_1 <= num_2 && num_1 <= num_3 && num_1 <= num_4)
    min = num_1;
  else if (num_2 <= num_1 && num_2 <= num_3 && num_2 <= num_4)
    min = num_2;
  else if (num_3 <= num_1 && num_3 <= num_2 && num_3 <= num_4)
    min = num_3;
  else if (num_4 <= num_1 && num_4 <= num_3 && num_4 <= num_2)
    min = num_4;

  if (num_1 >= num_2 && num_1 >= num_3 && num_1 >= num_4)
    max = num_1;
  else if (num_2 >= num_1 && num_2 >= num_3 && num_2 >= num_4)
    max = num_2;
  else if (num_3 >= num_1 && num_3 >= num_2 && num_3 >= num_4)
    max = num_3;
  else if (num_4 >= num_1 && num_4 >= num_3 && num_4 >= num_2)
    max = num_4;

  printf("Min: %d\n", min);
  printf("Max: %d\n", max);
}