### Exercise 02

Consider the following program:

```c
#include <stdio.h>

int main(void)
{
    printf("Parkinson's Law:\nWork expands so as to ");
    printf("fill the time\n");
    printf("available for its completion.\n");
    return 0;
}
```

(a) Identify the directives and statements in this program.
(b) What output does the program produce?

### Solution

#### a.

Directives:

- `#include <stdio.h>`

Statements:

- `printf("Parkinson's law:\nWork expands so as to ");`
- `printf("fill the time\n");`
- `printf("available for its completion.\n");`
- `return 0;`

#### b.

The program prints the following text to stdout:

```
Parkinson's Law:
Work expands so as to fill the time
available for its completion.
```
