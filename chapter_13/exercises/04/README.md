### Exercise 04

Modify the `read_line` function in each of the following ways:

(a) Have it skip whitespace before beginning to store input characters.  
(b) Have it stop reading at the first whitespace character. _Hint_: To determine
whether or not a character is whitespace, call the `isspace` function.  
(c) Have it stop reading at the first newline character, then store the newline
character in the string.  
(d) Have it leave behind characters that it doesn't have room to store.

### Solution

(a)

```c
int read_line(char str[], int n)
{
  int ch, i = 0;

  scanf(" ");

  while ((ch = getchar()) != '\n')

    if (i < n)
      str[i++] = ch;

  str[i] = '\0';

  return i;
}
```

(b)

```c
int read_line(char str[], int n)
{
  int ch, i = 0;

  while ((ch = getchar()) != '\n')
  {
    if (isspace(ch))
      break;

    if (i < n)
      str[i++] = ch;
  }

  str[i] = '\0';

  return i;
}
```

(c)

```c
int read_line(char str[], int n)
{
  int ch, i = 0;

  while ((ch = getchar()))
  {
    if (i < n)
      str[i++] = ch;

    if (ch == '\n')
      break;
  }

  str[i] = '\0';

  return i;
}
```

(d)

```c
int read_line(char str[], int n)
{
  int ch, i;

  for (i = 0; i < n; i++)
  {
    ch = getchar();

    if (ch == '\n')
      break;

    str[i] = ch;
  }

  str[i] = '\0';

  return i;
}
```
