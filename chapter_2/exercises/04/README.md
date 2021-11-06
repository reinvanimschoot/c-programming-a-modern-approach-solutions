### Exercise 04

Write a program that declares several int and float variables--without initializing them--and then prints their values. Is there any pattern to the values? (Usually there isn't.)

### Solution

See `04.c`.

The floats all seem to be `0.000000`, whereas the different integers have random values.
However, on repeated execution, the integers do always fall in the same large ranges.

`baz`, for example, is always somewhere between `-300000000` and `-500000000`.
