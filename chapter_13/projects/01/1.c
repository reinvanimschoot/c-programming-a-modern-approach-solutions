#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

#define MAX_WORD_LENGTH 20

int main(void)
{
    char smallest_word[MAX_WORD_LENGTH], largest_word[MAX_WORD_LENGTH], word[MAX_WORD_LENGTH];
    int comparison;

    printf("Enter a word: ");
    scanf("%20s", word);

    strcpy(smallest_word, word);
    strcpy(largest_word, word);

    for (;;)
    {
        printf("Enter a word: ");
        scanf("%20s", word);

        if (strcmp(smallest_word, word) > 0)
            strcpy(smallest_word, word);

        if (strcmp(largest_word, word) < 0)
            strcpy(largest_word, word);

        if (strlen(word) == 4)
            break;
    }

    printf("Smallest word: %s\n", smallest_word);
    printf("Largest word: %s", largest_word);

    return 0;
}