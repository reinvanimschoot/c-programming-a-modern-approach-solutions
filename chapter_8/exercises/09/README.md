### Exercise 09

Using the array of Exercise 8, write a program fragment that computes the
average temperature for a month (averaged over all days of the month and all
hours of the day).

### Solution

```c
#define DAYS 30
#define HOURS 24

int i, j;

float average, temp_sum = 0.0f;
float temp_reading[DAYS][HOURS];

for(i=0; i < DAYS; i++) {
    for(j=0; j < HOURS; j++) {
        temp_sum += temp_reading[i][j];
    }
}

average = temp_sum / (DAYS * HOURS);

```
