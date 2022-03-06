### Exercise 05

(a) Write a function named `capitalize` that capitalizes all letters in its
argument. The argument will be a null-terminated string containing arbitrary
characters, not just letters. Use arry subscripting to access the characters in
the string. _Hint_: Use the `toupper` function to convert each character to
upper case.

(b) Rewrite the `capitalize` function, this time using pointer arithmetic to
access the characters in the string.

### Solution

```c
void capitalize(char str[])
{
  for (char *p = str; *p; p++)
    *p = toupper(*p);
}
```
