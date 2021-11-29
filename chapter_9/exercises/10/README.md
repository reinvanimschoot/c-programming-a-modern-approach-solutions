### Exercise 10

Write functions that return the following values. (Assume that `a` and `n` are
parameters, where `a` is an array of `int` values and `n` is the length of the
array.)

(a) The largest element in `a`.  
(b) The average of all elements in `a`.  
(c) The number of positive elements in `a`.

### Solution

#### (a)

```c
int largest_element(int a[], int n)
{
  int i, max = a[0];

  for (i = 0; i < n; i++)
  {
    if (max < a[i])
      max = a[i];
  }

  return max;
}
```

#### (b)

```c
int average(int a[], int n)
{
  int i, sum = 0;

  for (i = 0; i < n; i++)
  {
    sum += a[i];
  }

  return sum / n;
}
```

#### (c)

```c
int positive_count(int a[], int n)
{
  int i, positive_count = 0;

  for (i = 0; i < n; i++)
  {
    if (a[i] > 0)
      positive_count++;
  }

  return positive_count;
}
```
