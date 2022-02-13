#include <stdio.h>

#define MAX_LENGTH 100

int main(void)
{
    char *p, message[MAX_LENGTH] = {0};

    p = message;

    printf("Enter a message: ");

    for (char c; (c = getchar()) != '\n' && message < &message[MAX_LENGTH - 1]; p++)
        *p = c;

    printf("Reversal is: ");

    for (; p >= message; p--)
        putchar(*p);

    return 0;
}