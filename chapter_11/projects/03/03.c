#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void)
{
    int numerator, denominator, ;

    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    reduce(numerator, denominator, &numerator, &denominator);

    printf("In lowest terms: %d/%d", numerator, denominator);

    return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
    int a = numerator;
    int b = denominator;

    int temp, gcd;

    for (;;)
    {
        if (a == 0)
        {
            gcd = b;
            break;
        }

        if (b == 0)
        {
            gcd = a;
            break;
        }

        temp = b;

        b = a % b;

        a = temp;
    }

    *reduced_denominator = numerator / gcd;
    *reduced_denominator = denominator / gcd;
}
