#include <stdio.h>

int main(void)
{
    int n, i, j, factorial_i;

    float e;

    printf("Please enter a number: ");
    scanf("%d", &n);

    for (e = 1.00f, i = 1; i <= n; ++i)
    {
        for (factorial_i = 1, j = 1; j <= i; ++j)
        {
            factorial_i *= j;
        }

        e += (1.00f / factorial_i);
    }

    printf("e: %f", e);

    return 0;
}