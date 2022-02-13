#include <stdio.h>
#include <ctype.h>

#define MAX_LENGTH 100

int main(void)
{
    char *p, *q, *r, message[MAX_LENGTH] = {0};

    p = message;

    printf("Enter a message: ");

    for (char c; (c = getchar()) != '\n' && p < message + MAX_LENGTH;)
        if (isalpha(c))
            *p++ = tolower(c);

    q = message;
    r = --p;

    for (; q <= r; q++, r--)
        if (*q != *r)
        {
            printf("Not a palindrome.");
            return 0;
        }

    printf("Palindrome");

    return 0;
}
