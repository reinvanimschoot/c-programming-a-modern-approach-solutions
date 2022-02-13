### Exercise 13

Section 8.2 had a program fragment in which two nested `for` loops initialized
the array `ident` for use as an identity matrix. Rewrite this code, using a
single pointer to step through the array one element at a time. _Hint_: Since we
won't be using `row` and `col` index variables, it won't be easy to tell where
to store 1. Instead, we ca use the fact that the first element of the
array should be 1, the next `N` elements should be 0, the next element should be
1 and so forth. Use a variable to kep track of how many consecutive 0s have been
stored; when the count reaches `N`, it's time to store 1.

### Solution

```c
void init_ident(int n, double ident[n][n])
{
  int i = n;

  for (double *p = ident[0]; p < ident[0] + (n * n); p++)
  {
    i++;

    if (i <= n)
      *p = 0;
    else
      i = 0, *p = 1;
  }
}
```
