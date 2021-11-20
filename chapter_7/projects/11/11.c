#include <stdio.h>

int main(void)
{

    char initial, c;

    printf("Enter a first and last name: ");

    while ((c = getchar()) == ' ')
        ;

    initial = c;

    while ((c = getchar()) != ' ')
        ;

    while ((c = getchar()) == ' ')
        ;

    do
        putchar(c);
    while ((c = getchar()) != ' ' && c != '\n');

    printf(", %c.\n", initial);

    return 0;
}
