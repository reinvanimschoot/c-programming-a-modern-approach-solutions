#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int hours_in_12, hours_in_24, minutes;

    char indicator;

    printf("Enter a 12-hour time: ");
    scanf("%2d:%2d %c", &hours_in_12, &minutes, &indicator);

    if (tolower(indicator) == 'a')
        hours_in_24 = hours_in_12;
    else
        hours_in_24 = hours_in_12 + 12;

    printf("Equivalent in 24-time: %.2d:%.2d", hours_in_24, minutes);

    return 0;
}
