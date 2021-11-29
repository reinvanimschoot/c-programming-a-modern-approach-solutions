### Exercise 14

The following function is supposed to return `true` if any element of the array
`a` has the value 0 and `false` if all elements are nonzero. Sadly, it contains
an error. Find the error and show how to fix it:

```c
bool has_zero(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        if (a[i] == 0)
            return true;
        else
            return false;
}
```

### Solution

The bug here is that if the first value is not a `0`, it will immediately return `false`,
without checking any other values in the array. We can still use this mechanism to return `true` since
we only need one `0` but the `return false;` statement should not be part of the loop.

```c
bool has_zero(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++) {
        if (a[i] == 0)
            return true;
    }

    return false;
}
```
