#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int input_hours, input_minutes, input_minutes_since_midnight;

    char time_indicator;

    int departure_1 = 480;
    int departure_2 = 583;
    int departure_3 = 679;
    int departure_4 = 767;
    int departure_5 = 840;
    int departure_6 = 945;
    int departure_7 = 1140;
    int departure_8 = 1305;

    printf("Enter a 12-hour time: ");
    scanf("%2d:%2d %c", &input_hours, &input_minutes, &time_indicator);

    if (tolower(time_indicator) == 'a')
        input_minutes_since_midnight = input_hours * 60 + input_minutes;
    else
        input_minutes_since_midnight = (input_hours + 12) * 60 + input_minutes;

    printf("Closest departure time is ");

    if (input_minutes_since_midnight <= departure_1 + (departure_2 - departure_1) / 2)
        printf("8:00 a.m., arriving at 10:16 a.m.");
    else if (input_minutes_since_midnight < departure_2 + (departure_3 - departure_2) / 2)
        printf("9:43 a.m., arriving at 11:52 a.m.");
    else if (input_minutes_since_midnight < departure_3 + (departure_4 - departure_3) / 2)
        printf("11:19 a.m., arriving at 1:31 p.m.");
    else if (input_minutes_since_midnight < departure_4 + (departure_5 - departure_4) / 2)
        printf("12:47 p.m., arriving at 3:00 p.m.");
    else if (input_minutes_since_midnight < departure_5 + (departure_6 - departure_5) / 2)
        printf("2:00 p.m., arriving at 4:08 p.m.");
    else if (input_minutes_since_midnight < departure_6 + (departure_7 - departure_6) / 2)
        printf("3:45 p.m., arriving at 5:55 p.m.");
    else if (input_minutes_since_midnight < departure_7 + (departure_8 - departure_7) / 2)
        printf("7:00 p.m., arriving at 9:20 p.m.");
    else
        printf("9:45 p.m., arriving at 11:58 p.m.");

    return 0;
}
