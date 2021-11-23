/* Checks numbers for repeated digits */

#include <stdbool.h> /* C99 only */
#include <stdio.h>

int main(void)
{

    int digits[10] = {0};

    int i, digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n % 10;

        digits[digit]++;

        n /= 10;
    }

    printf("Digit: %6c", ' ');

    for (i = 0; i < 10; i++)
        printf("%3d", i);

    printf("\nOccurrences: ");

    for (i = 0; i < 10; i++)
        printf("%3d", digits[i]);

    printf("\n");

    return 0;
}
