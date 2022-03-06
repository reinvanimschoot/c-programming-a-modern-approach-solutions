### Exercise 10

The following function supposedly creates an identical copy of a string. What's
wrong with the function?

```c
char *duplicate(const char *p)
{
    char *q;

    strcpy(q, p);
    return q;
}
```

### Solution

The value of q is undefined, so the call of strcpy attempts to copy the string pointed to by p into some unknown area of memory. Exercise 2 in Chapter 17 discusses how to write this function correctly.
