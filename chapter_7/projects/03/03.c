/* Sums a series of numbers (using double variables) */

#include <stdio.h>

int main(void)
{
    double n, sum = 0.00f;

    printf("This programs sums a series of integers.\n");
    printf("Enter integers (0 to terminate): ");

    scanf("%lf", &n);

    while (n != 0.00f)
    {
        sum += n;
        scanf("%lf", &n);
    }

    printf("The sum is: %lf\n", sum);

    return 0;
}
