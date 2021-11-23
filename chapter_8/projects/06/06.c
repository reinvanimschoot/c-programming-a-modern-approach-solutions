#include <stdio.h>
#include <ctype.h>

#define MAX_MESSAGE_LENGTH 120

int main(void)
{
  char c, original_message[MAX_MESSAGE_LENGTH] = {0};

  int i = 0;

  printf("Enter message: ");

  while ((c = getchar()) != '\n' && i < MAX_MESSAGE_LENGTH)
    original_message[i++] = c;

  printf("In B1FF-speak: ");

  for (i = 0; i < (int)(sizeof(original_message) / sizeof(original_message[0])); i++)
  {
    switch (original_message[i])
    {
    case 'a':
      putchar('4');
      break;
    case 'b':
      putchar('8');
      break;
    case 'e':
      putchar('3');
      break;
    case 'i':
      putchar('1');
      break;
    case 'o':
      putchar('0');
      break;
    case 's':
      putchar('5');
      break;
    default:
      putchar(toupper(original_message[i]));
      break;
    }
  }
  printf("!!!!!!!!!!\n");
}