### Exercise 16

Write a loop that prints the highest temperature in the `temperatures` array
(see Exercise 14) for each day of the week. The loop body should call the
`find_largest` function, passing it one row of the array at a time.

### Solution

```c
  int largest_temp;

  for (int(*p)[24] = temperatures; p < temperatures + 24; p++)
  {
    largest_temp = find_largest(*p, 24);
    printf("Highest Temperature: %d \n", largest_temp);
  }
```
