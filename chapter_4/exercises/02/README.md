### Exercise 4.02

If `i` and `j` are positive integers, does `(-i)/j` always have the same value
as `-(i/j)`? Justify your answer.

### Solution

It does not.

The C89 standard states that if either operand of a `/` operator is negative,
the result of the division can be rounded either up or down.
This means that `(-i)/j` can produce different results than `-(i/j)`, which is just the negative of `i/j`.

In C99 however, the result of a division is always truncated toward zero, which means `-(i/j)` and `(-i)/j` are equivalent.
