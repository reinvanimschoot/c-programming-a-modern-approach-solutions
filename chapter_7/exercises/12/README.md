### Exercise 12

Suppose that `i` is a variable of type `int`, `f` is a variable of type `float`,
and `d` is a varaible of type `double`. Explain what conversions take place
during the execution of the statement:

`d = i + f;`

### Solution

First, `i` + `f` will implicitly convert `i` to `float`, by way of usual arithmetic conversion.

Secondly, since `d` is of type `double`, assignment to `d` will convert that value to `double`.
