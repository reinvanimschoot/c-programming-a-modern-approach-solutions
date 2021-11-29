### Exercise 09

What will be the output of the following program?

```c
#include <stdio.h>

void swap(int a, int b);

int main(void)
{
    int i = 1, j = 2;

    swap(i, j);
    printf("i = %d, j = %d\n", i, j);
    return 0;
}

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
```

### Solution

`i = 1, j = 2`

The intent of the `swap` function is clear but since C is a pass-by-value language,
variables `a` and `b` are copies of `i` and `j` respectively, which means that any changes
made to those variables inside of `swap` are not reflected outside of the function.
