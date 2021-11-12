#include <stdio.h>

int main(void)
{
    int n, i, factorial_i;

    float e, epsilon, current_term;

    printf("Please enter a number: ");
    scanf("%d", &n);

    for (e = 1.00f, factorial_i = 1, i = 1; current_term >= epsilon; ++i)
    {
        factorial_i *= i;

        current_term = 1.00f / factorial_i;

        e += current_term;
    }

    printf("e: %f", e);

    return 0;
}