### Exercise 11

Modify the `find_largest` function so that it uses pointer arithmetic -- not
subscripting -- to visit array elements.

### Solution

```c
int find_largest(int a[], int n) {
    int *p = a;
    int max = *p++;

    for(; p < a + n; p++)
        if(*p > max)
            max = *p;

    return max;
}
```
