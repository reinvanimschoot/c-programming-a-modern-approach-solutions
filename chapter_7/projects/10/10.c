#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c;

    int vowel_count = 0;

    printf("Enter a sentence: ");

    while ((c = getchar()) != '\n')
    {
        switch (tolower(c))
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            vowel_count++;
            break;
        }
    }

    printf("Your sentence contains %d vowels.", vowel_count);
}
