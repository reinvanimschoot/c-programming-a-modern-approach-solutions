### Exercise 06

Write a function named `censor` that modifies a string by replacing every
occurrence of `foo` by `xxx`. For example, the string `"food fool"` would become
`"xxxd xxxl"`. Make the function as short as possible without sacrificing
clarity.

### Solution

```c
void censor(char str[])
{
  for (char *p = str; *p; p++)
    if (*p == 'f' && *(p + 1) == 'o' && *(p + 2) == 'o')
    {
      *p++ = 'x';
      *p++ = 'x';
      *p = 'x';
    }
}
```
