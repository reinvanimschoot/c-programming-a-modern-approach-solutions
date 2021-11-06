### Exercise 01

Create and run Kernighan and Ritchie's famous "hello, world" program:

```c
#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
}
```

Do you get a warning message from the compiler? If so, what's needed to make it
go away?

### Solution

When running `gcc hello.c`, we get one warning:

```
1.c:5:1: warning: control reaches end of non-void function [-Wreturn-type]
```

We can fix this by adding an explicit `return 0;` at the end of the `main` function body.

```c
#include <stdio.h>

int main(void)
{
    printf("hello, world\n");

    return 0;
}
```
