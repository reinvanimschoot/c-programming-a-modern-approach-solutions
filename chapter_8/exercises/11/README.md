### Exercise 11

Write a program fragment that declares an 8 x 8 `char` array named
`checker_board` and then uses a loop to store the following data into the array
(one character per array element):

```
B R B R B R B R
R B R B R B R B
B R B R B R B R
R B R B R B R B
B R B R B R B R
R B R B R B R B
B R B R B R B R
R B R B R B R B
```

_Hint_: The element in row i, column j, should be the letter `B` if i + j is an
even number.

### Solution

```c
#define ROWS 8;
#define COLUMNS 8;

int i, j;
char chessboard[ROWS][COLUMNS];

for(i = 0; i < ROWS; i++) {
  for(j = 0; j < COLUMNS; j++)
    chessboard[i][j] = ((i +j) % 2 == 0) ? 'B' : 'R';
}
```
