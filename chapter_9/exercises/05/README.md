### Exercise 05

Write a function `num_digits(n)` that returns the number of digits in `n` (a
positive integer). _Hint_: To determine the number of digits in a number _n_,
divide it by 10 repeatedly. When _n_ reaches 0, the number of divisions
indicates how many digits _n_ originally had.

### Solution

```c
int num_digits(int n) {
    int digit_count = 0;

    while (n > 0) {
        digit_count++;

        n /= 10;
    }

    return digit_count;
}
```
