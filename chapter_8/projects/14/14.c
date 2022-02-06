#include <stdio.h>

#define SENTENCE_LENGTH 50

int main(void)
{
  int i, j, k;
  char c;
  char debug;
  char sentence[SENTENCE_LENGTH] = {0};
  char terminal;

  printf("Enter a sentence: ");

  for (int i = 0; (c = getchar()) != '\n'; i++)
  {
    if (c == '.' || c == '?' || c == '!')
    {
      terminal = c;
      break;
    }
    else
      sentence[i] = c;
  }

  printf("Reversal of sentence: ");

  for (i = (SENTENCE_LENGTH - 1); i >= 0; i--)
  {
    if (sentence[i - 1] == ' ' || i == 0)
    {
      for (k = i; sentence[k] != ' ' && sentence[k] != '\0'; k++)
        putchar(sentence[k]);

      if (i != 0)
        putchar(' ');
    }
  }

  putchar(terminal);

  return 0;
}