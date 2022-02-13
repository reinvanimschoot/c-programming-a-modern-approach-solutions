#include <stdio.h>

#define SENTENCE_LENGTH 50

int main(void)
{
  char *p, *q, c, terminal, sentence[SENTENCE_LENGTH] = {0};

  printf("Enter a sentence: ");

  for (p = sentence; (c = getchar()) != '\n'; p++)
  {
    if (c == '.' || c == '?' || c == '!')
    {
      terminal = c;
      break;
    }
    else
      *p = c;
  }

  printf("Reversal of sentence: ");

  p = &sentence[SENTENCE_LENGTH - 1];

  for (; p >= sentence; p--)
  {
    if (*p == ' ')
    {
      for (q = p + 1; *q != ' ' && *q != '\0'; q++)
        putchar(*q);

      putchar(' ');
    }

    if (p == sentence)
      for (q = p; *q != ' ' && *q != '\0'; q++)
        putchar(*q);
  }

  putchar(terminal);

  return 0;
}