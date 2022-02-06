#include <stdio.h>

int main(void)
{
  char c, shifted_char;
  int shift_amount = 0;
  char message[80] = {0};

  printf("Enter a message to be encrypted: ");

  for (int i = 0; (c = getchar()) != '\n'; i++)
    message[i] = c;

  printf("Enter shift amount (1-25): ");
  scanf("%d", &shift_amount);

  printf("Encrypted message: ");

  for (int i = 0; message[i] != '\0'; i++)
  {
    if (message[i] >= 'A' && message[i] <= 'Z')
      shifted_char = ((message[i] - 'A') + shift_amount) % 26 + 'A';
    else if (message[i] >= 'a' && message[i] <= 'z')
      shifted_char = ((message[i] - 'a') + shift_amount) % 26 + 'a';
    else
      shifted_char = message[i];

    putchar(shifted_char);
  }

  return 0;
}