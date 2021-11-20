### Project 01

The `square2.c` program of Section 6.3 will fail (usually by printing strange
answers) if `i * i` exceeds the maximum `int` value. Run the program and
determine the smallest value of `n` that causes failure. Try changing the type
of `i` to `short` and running the program again. (Don't forget to update the
conversion specifications in the call of `printf`!) Then try `long`. From these
experiments, what can you conclude about the number of bits used to store
integer types on your machine?

### Solution

See `01.c`.

The smallest value of `n` that causes failure is `46341`.
This is because `46341^2` equals `2 147 488 281`, which is more than
the maximum value of a signed 32-bit integer, being `2 147 483 647`.
Hence, the leftmost bit (in this case the `sign bit`) is set to `1`,
which sets the value to a negative value that makes no sense.

When changing `i` to the type `short`, the maximum value that `i` seems to allow is `32 766`.
Once again, this makes sense since the maximum value of a signed 16-bit integer is `32 767`,
which is what a `short` on my computer seems to be.

When I converted `i` to type `long`, I was unable to find a maximum without waiting a long time.
I would assume this means that `long` is a signed 64-bit integer.
