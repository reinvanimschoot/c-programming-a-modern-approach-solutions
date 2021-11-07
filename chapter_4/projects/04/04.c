#include <stdio.h>

int main(void)
{
  int number,
      octal_digit_1, octal_digit_2, octal_digit_3, octal_digit_4, octal_digit_5;

  printf("Enter a number between 0 and 32767:");
  scanf("%d", &number);

  octal_digit_5 = number % 8;
  number /= 8;
  octal_digit_4 = number % 8;
  number /= 8;
  octal_digit_3 = number % 8;
  number /= 8;
  octal_digit_2 = number % 8;
  number /= 8;
  octal_digit_1 = number % 8;

  printf("In octal, your number is: %d%d%d%d%d", octal_digit_1, octal_digit_2, octal_digit_3, octal_digit_4, octal_digit_5);

  return 0;
}