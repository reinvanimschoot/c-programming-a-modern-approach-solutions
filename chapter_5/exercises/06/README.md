### Exercise 06

Is the following `if` statement legal?

```c
if (n == 1-10)
    printf("n is between 1 and 10\n");
```

If so, what does it do when `n` is equal to 5?

### Solution

It is legal in the technical sense but it gives the wrong impression that this
validates whether or not `n` falls between 1 and 10, while actually it will only result in `1` (true)
when `n` is equal to `-9`, since `n == (1-10)` evaluates to `n == -9`.
