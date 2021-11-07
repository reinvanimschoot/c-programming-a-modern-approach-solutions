### Exercise 4.13

Only one of the expressions `++i` and `i++` is exactly the same as `(i += 1)`;
which is it? Justify your answer.

### Solution

`++i` is equivalent to `(i += 1)`. The prefix version immediately increments `i`,
while the postfix version only increments `i` after the expression (the assignment) has finished evaluating.
