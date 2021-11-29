### Exercise 07

Suppose that the function `f` has the following definition:

`int f(int a, int b) {` ... `}`

Which of the following statements are legal? Assume that `i` has type `int` and
`x` has type `double`.

(a) `i = f(83, 12);`  
(b) `x = f(83, 12);`  
(c) `i = f(3.15, 9.28);`  
(d) `x = f(3.15, 9.28);`  
(e) `f(83, 12);`

### Solution

All of the statements are legal since implicit conversion takes place in the following circumstances:

- When a function receives arguments that have a different type than its parameters.
- When a variable is assigned a value that differs from its type.
