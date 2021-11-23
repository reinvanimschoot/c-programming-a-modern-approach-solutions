/* Prints a table of compound interest */

#include <stdio.h>

#define NUM_RATES ((int)(sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00
#define MONTHS 12

int main(void)
{
    int i, j, low_rate, num_years, year;
    double monthly_interest, value[5];

    printf("Enter interest rate: ");
    scanf("%d", &low_rate);
    printf("Enter number of years: ");
    scanf("%d", &num_years);

    printf("\nYears");
    for (i = 0; i < NUM_RATES; i++)
    {
        printf("%6d%%", low_rate + i);
        value[i] = INITIAL_BALANCE;
    }
    printf("\n");

    for (year = 1; year <= num_years; year++)
    {
        printf("%3d    ", year);
        for (i = 0; i < NUM_RATES; i++)
        {
            for (monthly_interest = 1, j = 0; j < MONTHS; j++)
                monthly_interest *= (1 + ((low_rate + i) / 100.0) / MONTHS);

            value[i] += (value[i] * monthly_interest) - value[i];

            printf("%7.2f", value[i]);
        }
        printf("\n");
    }

    return 0;
}