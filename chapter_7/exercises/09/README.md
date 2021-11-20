### Exercise 09

Suppose that `i` and `j` are variables of type `int`. What is the type of the
expression `i / j + 'a'`?

### Solution

When implicit conversion takes place during arithmetic operations, the usual arithmetic conversion
strategy is used, which uses the strategy of converting types to the narrowest type that can accomodate all values. In this case, this would be the `int` type since there is no telling whether or not the values represented by `i` and/or `j` could be accomodated by the `char` type.
