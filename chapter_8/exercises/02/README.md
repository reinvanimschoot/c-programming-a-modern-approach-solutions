### Exercise 02

The Q&A section shows how to use a _letter_ as an array subscript. Describe how
to use a _digit_ (in character form) as a subscript.

### Solution

Instead of subtracting char with `'a'` or `'A'`, you would have to use the character representation of `0`.

`digit_count[ch - '0'] = 0;`
