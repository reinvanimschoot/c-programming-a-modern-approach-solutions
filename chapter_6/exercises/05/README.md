### Exercise 05

Which one of the following statements is not equivalent to the other two
(assuming that the loop bodies are the same)?

(a) `while (i < 10) {`...`}`  
(b) `for (; i < 10;) {`...`}`  
(c) `do {`...`} while (i < 10);`

### Solution

c. Regardless of whether or not `i` is smaller than `10` at the start of the loop,
the `do while` loop will still iterate once and only after the first iteration it will evaluate the condition.
