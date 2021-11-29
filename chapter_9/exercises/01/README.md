### Exercise 01

The following function, which computes the area of a triangle, contains two
errors. Locate the errors and show how to fix them. (_Hint_: There are no errors
in the formula.)

```c
double triangle_area(double base, height)
double product;
{
    product = base * height;
    return product / 2;
}
```

### Solution

- The parameter `height` should have its own parameter type added.
- The declaration `double product` should be placed inside the function body.

```c
double triangle_area(double base, double height)
{
    double product;

    product = base * height;
    return product / 2;
}
```
