#include <stdio.h>
#include <ctype.h>

int main(void)
{
  char c;
  int is_anagram = 1;
  int alphabet[26] = {0};

  printf("Enter first word: ");

  for (int i = 0; (c = getchar()) != '\n'; i++)
    if (isalpha(c))
      alphabet[tolower(c) - 'a']++;

  printf("Enter second word: ");

  for (int i = 0; (c = getchar()) != '\n'; i++)
    if (isalpha(c))
      alphabet[tolower(c) - 'a']--;

  for (int i = 0; i < sizeof(alphabet) / sizeof(alphabet[0]); i++)
    if (alphabet[i] != 0)
    {
      is_anagram = 0;
      break;
    }

  if (is_anagram)
    printf("The words are anagrams.");
  else
    printf("The words are not anagrams.");

  return 0;
}