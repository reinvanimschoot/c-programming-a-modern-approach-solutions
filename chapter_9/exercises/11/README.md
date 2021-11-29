### Exercise 11

Write the following function:

```c
float compute_GPA(char grades[], int n);
```

The `grades` array will contain letter grades (`A`, `B`, `C`, `D` or `F`, either
upper-case or lower-case); `n` is the length of the array. The function should
return the average of the grades (assume that `A` = 4, `B` = 3, `C` = 2, `D` = 1
and `F` = 0).

### Solution

```c
#include <ctype.h>

float compute_GPA(char grades[], int n)
{
  int i;
  float total = 0.0f;

  for (i = 0; i < n; i++)
  {
    switch (toupper(grades[i]))
    {
    case 'A':
      total += 4;
      break;
    case 'B':
      total += 3;
      break;
    case 'C':
      total += 2;
      break;
    case 'D':
      total += 1;
      break;
    case 'F':
      total += 0;
      break;
    }
  }

  return total / n;
}
```
