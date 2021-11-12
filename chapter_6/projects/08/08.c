#include <stdio.h>

int main(void)
{
    int num_of_days, offset_days, starting_day, i;

    printf("Enter number of days in month: ");
    scanf("%d", &num_of_days);

    printf("Enter starting day of the week (1=Mon, 7=Sun): ");
    scanf("%d", &starting_day);

    offset_days = starting_day - 1;

    printf("\n\nMon Tue Wed Thu Fri Sat Sun\n");

    for (i = 1; i <= offset_days; i++)
    {
        printf("    ");
    }

    for (i = 1; i <= num_of_days; i++)
    {

        printf("%3d", i);

        if ((i + offset_days) % 7 == 0)
            printf("\n");
        else
            printf(" ");
    }

    return 0;
}
