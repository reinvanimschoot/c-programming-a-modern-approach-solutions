### Exercise 18

Write the `evaluate_position` function described in Exercise 13 of Chapter 9.
Use pointer arithmetic -- not subscripting -- to visit array elements. Use a
single loop instead of nested loops.

### Solution

```c
int evaluate_position(char board[8][8])
{
  int white_piece_value = 0, black_piece_value = 0;

  for (char *p = board[0]; p < board[0] + (8 * 8); p++)
  {
    switch (*p)
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

  return white_piece_value - black_piece_value;
}
```
