### Project 16

Write a program that test whether two words are anagrams (permutations of the
same letters):

```
Enter first words: smartest
Enter second words: mattress
The words are anagrams.

Enter first word: dumbest
Enter second word: stumble
The words are not anagrams.
```

Write a loop that reads the first word, character by character, using an array
of 26 integers to keep track of how many times each letter has been seen. (For
example, after the word _smartest_ has been read, the array should contain the
values 1 0 0 0 1 0 0 0 0 0 0 0 1 0 0 0 0 1 2 2 0 0 0 0 0 0, reflecting the fact
that _smartest_ contains one _a_, one _e_, one _m_, one _r_, two _s_'s and two
_t_'s.) Use another loop to read the second word, except this time decrementing
the corresponding array element as each letter is read. Both loops should ignore
any characters that aren't letters, and bth should treat upper-case letters in
the same way as lower-case letters. After the second word has been read, use a
third loop to check whether all the elements in the array are zero. If so, the
words are anagrams. _Hint_: You may wish to use the functions from `<ctype.h>`,
such as `isalpha` and `tolower`.

### Solution

See `16.c`.
