#include <stdio.h>

#define DEPARTURE 0
#define ARRIVAL 1

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main(void)
{
    int input_hours, input_minutes, departure_hour, arrival_hour, desired_time, departure_time, arrival_time;

    printf("Enter a 24-hour time: ");
    scanf("%2d:%2d", &input_hours, &input_minutes);

    desired_time = input_hours * 60 + input_minutes;

    find_closest_flight(desired_time, &departure_time, &arrival_time);

    departure_hour = departure_time / 60;
    departure_hour -= departure_hour > 12 ? 12 : 0;

    arrival_hour = arrival_time / 60;
    arrival_hour -= arrival_hour > 12 ? 12 : 0;

    printf("Closest departure time is ");
    printf("%d:%.2d", departure_hour, departure_time % 60);

    if (departure_time / 60 >= 12)
        printf(" p.m.");
    else
        printf(" a.m.");

    printf(", arriving at ");
    printf("%d:%.2d", arrival_hour, arrival_time % 60);

    if (arrival_time / 60 >= 12)
        printf(" p.m.");
    else
        printf(" a.m.");

    return 0;
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
    int flights[8][2] = {{480, 616}, {583, 712}, {679, 811}, {767, 900}, {840, 968}, {945, 1075}, {1140, 1280}, {1305, 1438}};

    if (desired_time <= flights[0][DEPARTURE] + (flights[1][DEPARTURE] - flights[0][DEPARTURE]) / 2)
    {
        *departure_time = flights[0][DEPARTURE];
        *arrival_time = flights[0][ARRIVAL];
    }
    else if (desired_time < flights[1][DEPARTURE] + (flights[2][DEPARTURE] - flights[1][DEPARTURE]) / 2)
    {
        *departure_time = flights[1][DEPARTURE];
        *arrival_time = flights[1][ARRIVAL];
    }
    else if (desired_time < flights[2][DEPARTURE] + (flights[3][DEPARTURE] - flights[2][DEPARTURE]) / 2)
    {
        *departure_time = flights[2][DEPARTURE];
        *arrival_time = flights[2][ARRIVAL];
    }
    else if (desired_time < flights[3][DEPARTURE] + (flights[4][DEPARTURE] - flights[3][DEPARTURE]) / 2)
    {
        *departure_time = flights[3][DEPARTURE];
        *arrival_time = flights[3][ARRIVAL];
    }
    else if (desired_time < flights[4][DEPARTURE] + (flights[5][DEPARTURE] - flights[4][DEPARTURE]) / 2)
    {
        *departure_time = flights[4][DEPARTURE];
        *arrival_time = flights[4][ARRIVAL];
    }
    else if (desired_time < flights[5][DEPARTURE] + (flights[6][DEPARTURE] - flights[5][DEPARTURE]) / 2)
    {
        *departure_time = flights[5][DEPARTURE];
        *arrival_time = flights[5][ARRIVAL];
    }
    else if (desired_time < flights[6][DEPARTURE] + (flights[7][DEPARTURE] - flights[6][DEPARTURE]) / 2)
    {
        *departure_time = flights[6][DEPARTURE];
        *arrival_time = flights[6][ARRIVAL];
    }
    else
    {
        *departure_time = flights[7][DEPARTURE];
        *arrival_time = flights[7][ARRIVAL];
    }
}
