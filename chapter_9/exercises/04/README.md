### Exercise 04

Write a function `day_of_year(month, day, year)` that returns the day of the
year (an integer between 1 and 366) specified by the three arguments.

### Solution

```c
int day_of_year(int month, int day, int year)
{
  int i, day_of_year = 0;
  int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  day_of_year += day;

  for (i = 1; i < month; i++)
    day_of_year += months[i];

  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    day_of_year++;

  return day_of_year;
}
```
