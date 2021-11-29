### Exercise 17

Rewrite the `fact` function so that it's no longer recursive.

### Solution

```c
int fact(int n)
{
  int total;

  for (total = 1; n > 1; n--)
    total *= n;

  return total;
}
```
