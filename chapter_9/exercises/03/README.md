### Exercise 9.03

Write a function `gcd(m, n)` that calculates the greatest common divisor of the
integers `m` and `n`. (Programming Project 2 in Chapter 6 describes Euclid's
algorithm for computing the GCD.)

### Solution

```c
int gcd(int m, int n) {
    int temp;

    for (;;)
    {
        if (m == 0)
        {
            gcd = n;
            break;
        }

        if (n == 0)
        {
            gcd = m;
            break;
        }

        temp = n;

        n = m % n;

        n = temp;
    }
}
```
