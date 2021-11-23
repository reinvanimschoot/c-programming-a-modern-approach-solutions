/* Checks numbers for repeated digits */

#include <stdbool.h> /* C99 only */
#include <stdio.h>

int main(void)
{

    bool digit_seen[10] = {false};
    bool digit_repeated[10] = {false};

    int i, digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n % 10;

        if (digit_seen[digit])
            digit_repeated[digit] = true;

        digit_seen[digit] = true;

        n /= 10;
    }

    printf("Repeated digit(s): ");
    for (i = 0; i < 10; i++)
    {
        if (digit_seen[i])
            printf("%d ", digit_seen[i]);
    }

    printf("\n");

    return 0;
}
