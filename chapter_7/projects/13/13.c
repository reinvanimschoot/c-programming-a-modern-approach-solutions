#include <stdio.h>

int main(void)
{
    char in_word, c;
    float word_count, total_word_length;

    printf("Enter a sentence: ");

    in_word = 0;
    total_word_length = 0;
    word_count = 0;

    while ((c = getchar()) != '\n')
    {
        if (c == ' ')
        {
            if (in_word)
                in_word = 0;
        }
        else
        {
            if (in_word)
                total_word_length++;
            else
            {
                total_word_length++;
                word_count++;
                in_word = 1;
            }
        }
    }

    printf("Average word length: %.1f", total_word_length / word_count);

    return 0;
}
