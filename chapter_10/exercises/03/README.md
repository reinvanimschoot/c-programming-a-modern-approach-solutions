### Exercise 03

Suppose that a program has only one function (`main`). How many different
variables names `i` could this program contain?

### Solution

You could add an external variable called `i` and a local variable called `i` inside
of the `main` function. That being said, you could also add any number of blocks that
declare a new `i` variable each time.

```c
{
  int i;
}
```

So technically, the amount of variables called `i` is limitless.
