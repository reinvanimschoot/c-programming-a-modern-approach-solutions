### Exercise 13

Write the following function, which evaluates a chess position:

```c
int evaluate_position(char board[8][8]);
```

`board` represents a configuration of pieces on a chessboard, where the letters
`K`, `Q`, `R`, `B`, `N` and `P` represent White pieces, and the letters `k`,
`q`, `r`, `b`, `n` and `p` represent Black pieces. `evaluate_position` should
sum the values of the White pieces (`Q` = 9, `R` = 5, `B` = 3, `N` = 3, `P` =
1). It should also sum the values of the Black pieces (done in a similar way).
The function will return the difference between the two numbers. This value wil
be positive if White has an advantage in material and negative if Black has an
advantage.

### Solution

```c
int evaluate_position(char board[8][8])
{
  int i, j, white_piece_value = 0, black_piece_value = 0;

  for (i = 0; i < 8; i++)
  {
    for (j = 0; j < 8; j++)
    {
      switch (board[i][j])
      {
      case 'q':
        black_piece_value += 9;
        break;
      case 'r':
        black_piece_value += 5;
        break;
      case 'b':
      case 'n':
        black_piece_value += 3;
        break;
      case 'p':
        black_piece_value += 1;
        break;
      case 'Q':
        white_piece_value += 9;
        break;
      case 'R':
        white_piece_value += 5;
        break;
      case 'B':
      case 'N':
        white_piece_value += 3;
        break;
      case 'P':
        white_piece_value += 1;
        break;
      }
    }
  }

  return white_piece_value - black_piece_value;
}
```
