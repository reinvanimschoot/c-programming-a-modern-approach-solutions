#include <stdio.h>

int main(void)
{
  int input_hours, input_minutes, input_minutes_since_midnight;

  int departures[8] = {480, 583, 679, 767, 840, 945, 1140, 1305};

  printf("Enter a 24-hour time: ");
  scanf("%2d:%2d", &input_hours, &input_minutes);

  input_minutes_since_midnight = input_hours * 60 + input_minutes;

  printf("Closest departure time is ");

  if (input_minutes_since_midnight <= departures[0] + (departures[1] - departures[0]) / 2)
    printf("8:00 a.m., arriving at 10:16 a.m.");
  else if (input_minutes_since_midnight < departures[1] + (departures[2] - departures[1]) / 2)
    printf("9:43 a.m., arriving at 11:52 a.m.");
  else if (input_minutes_since_midnight < departures[2] + (departures[3] - departures[2]) / 2)
    printf("11:19 a.m., arriving at 1:31 p.m.");
  else if (input_minutes_since_midnight < departures[3] + (departures[4] - departures[3]) / 2)
    printf("12:47 p.m., arriving at 3:00 p.m.");
  else if (input_minutes_since_midnight < departures[4] + (departures[5] - departures[4]) / 2)
    printf("2:00 p.m., arriving at 4:08 p.m.");
  else if (input_minutes_since_midnight < departures[5] + (departures[6] - departures[5]) / 2)
    printf("3:45 p.m., arriving at 5:55 p.m.");
  else if (input_minutes_since_midnight < departures[6] + (departures[7] - departures[6]) / 2)
    printf("7:00 p.m., arriving at 9:20 p.m.");
  else
    printf("9:45 p.m., arriving at 11:58 p.m.");

  return 0;
}
