### Exercise 11

The Q&A section at the end of this chapter shows how the `strcmp` function might
be written using array subscripting. Modify the function to use pointer
arithmetic instead.

### Solution

```c
int strcmp(char *s1, char *s2)
{
  for (; *s1 && *s1 == *s2; s1++, s2++)
    ;

  return *s1 - *s2;
}
```
