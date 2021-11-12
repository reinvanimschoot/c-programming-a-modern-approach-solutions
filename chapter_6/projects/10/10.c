#include <stdio.h>

int main(void)
{
    int day, month, year, min_day, min_month, min_year;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &min_month, &min_day, &min_year);

    for (;;)
    {
        printf("Enter a date (mm/dd/yyyy): ");
        scanf("%d/%d/%d", &month, &day, &year);

        if (day == 0 && month == 0 && year == 0)
            break;

        if ((min_year > year) ||
            (min_year == year && min_month > month) ||
            (min_year == year && min_month == month && min_day > day))
            min_year = year, min_month = month, min_day = day;
    }

    printf("%.2d/%.2d/%.2d is the earliest date.", min_month, min_day, min_year);

    return 0;
}