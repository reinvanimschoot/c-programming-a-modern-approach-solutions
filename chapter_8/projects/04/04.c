/* Reverses a series of numbers */

#include <stdio.h>

#define N 10

int main(void)
{
    int a[N], i;

    printf("Enter %d numbers: ", N);

    for (i = 0; i < (int)(sizeof(a) / sizeof(a[0])); i++)
        scanf("%d", &a[i]);

    printf("In reverse order: ");
    for (i = N - 1; i >= (int)(sizeof(a) / sizeof(a[0])); i--)
        scanf(" %d", &a[i]);
    printf("\n");

    return 0;
}
