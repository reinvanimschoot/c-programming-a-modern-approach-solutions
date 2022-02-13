### Exercise 02

Suppose that `high`, `low` and `middle` are all pointer variables of the same
type, and that `low` and `high` point to elements of an array. What is the
following statement illegal, and how could it be fixed?

```c
middle = (low + high) / 2;
```

### Solution

There are only three legal arithmetic operations that can be performed on pointers (adding an integer to a pointer, subtracting an integer from a pointer and subtracting one pointer from another). Adding two pointers together is hence illegal and should be replaced by subtracting one pointer from the other.

```c
middle = (high - low) / 2 + low;
```
