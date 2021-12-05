### Exercise 07

Write the following function:

```c
void split_date(int day_of_year, int year, int *month, int *day);
```

`day_of_year` is an integer between 1 and 366, specifying a particular day
within the year designated by `year`. `month` and `day` point to variables in
which the function will store the equivalent month (1-12) and day within that
month (1-31).

### Solution

```c
void split_date(int day_of_year, int year, int *month, int *day)
{
  int i, days_in_months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  /* adjust for leap years */
  if (year % 4 == 0)
    days_in_months[1]++;

  for (*month = 1, i = 0; i < 12 && day_of_year > days_in_months[i]; i++)
  {
    *month++;
    day_of_year -= days_in_months[i];
  }

  *day = day_of_year;
}
```
