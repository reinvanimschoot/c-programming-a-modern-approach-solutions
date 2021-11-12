#include <stdio.h>

int main(void)
{
    int max, squarable;

    printf("Please enter a number: ");
    scanf("%d", &max);

    for (squarable = 2; (squarable * squarable) <= max; squarable += 2)
        printf("%d\n", (squarable * squarable));

    return 0;
}
