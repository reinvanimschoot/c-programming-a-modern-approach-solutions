### Exercise 3.05

Suppose that we call `scanf` as follows:

```c
scanf("%f%d%f", &x, &i, &y);
```

If the user enters

```
12.3 45.6 789
```

what will be the values of `x`, `i` and `y` after the call? (Assume that `x` and
`y` are `float` variables and `i` is an `int` variable.)

### Solution

`x` would be `12.3`
`i` would be `45`
`y` would be `0.6`
