### Exercise 4.07

The algorithm for computing the UPC check digit ends with the following steps:

Subtract 1 from the total.  
Compute the remainder when the adjusted total is divided by 10.  
Subtract the remainder from 9.

It's tempting to try to simplify the algorithm by using these steps instead:

Compute the remainder when the total is divided by 10.  
Subtract the remainder from 10.

Why doesn't this work?

### Solution

If the total would be `20`, then the remainder of dividing it by `10` would be `0`,
which would result in `10-0` as the last step, which would result in `0` as the check digit, which is not valid since `10` are two digits.
