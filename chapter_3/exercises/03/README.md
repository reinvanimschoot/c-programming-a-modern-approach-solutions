### Exercise 03

For each of the following pairs of `scanf` format strings, indicate whether or
not the two strings are equivalent. If they're not, show how they can be
distinguished.

```
(a) "%d"       versus " %d"
(b) "%d-%d-%d" versus "%d -%d -%d"
(c) "%f"       versus "%f "
(d) "%f,%f"    versus "%f, %f"
```

### Solution

(a) **Equivalent** (a whitespace character matches zero or more whitespace characters.)
(b) **Equivalent** (a whitespace character matches zero or more whitespace characters.)
(c) **Not equivalent** since scanf will require a non-whitespace character at the end of the input.
(d) **Equivalent** (a whitespace character matches zero or more whitespace characters.)
