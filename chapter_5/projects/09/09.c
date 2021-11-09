#include <stdio.h>

int main(void)
{
    int date_1_day, date_1_month, date_1_year, date_2_day, date_2_month, date_2_year;

    printf("Enter first date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &date_1_day, &date_1_month, &date_1_year);

    printf("Enter second date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &date_2_day, &date_2_month, &date_2_year);

    if (date_1_year < date_2_year)
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d", date_1_day, date_1_month, date_1_year, date_2_day, date_2_month, date_2_year);
    else if (date_2_year < date_1_year)
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d", date_2_day, date_2_month, date_2_year, date_1_day, date_1_month, date_1_year);
    else if (date_1_month < date_2_month)
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d", date_1_day, date_1_month, date_1_year, date_2_day, date_2_month, date_2_year);
    else if (date_1_month < date_2_month)
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d", date_2_day, date_2_month, date_2_year, date_1_day, date_1_month, date_1_year);
    else if (date_1_day < date_2_day)
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d", date_1_day, date_1_month, date_1_year, date_2_day, date_2_month, date_2_year);
    else if (date_2_day < date_1_day)
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d", date_2_day, date_2_month, date_2_year, date_1_day, date_1_month, date_1_year);
    else
        printf("Both dates are the same.");

    return 0;
}
