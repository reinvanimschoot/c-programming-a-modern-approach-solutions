### Project 07

The `power` function of Section 9.6 can be made faster by having it calculate
_x_<sup>_n_</sup> in a different way. We first notice that if _n_ is a power of
2, then _x_<sup>_n_</sup> can be computed by squaring. For example,
_x_<sup>4</sup> is the square of _x_<sup>2</sup>, so _x_<sup>4</sup> can be
computed using only two multiplications instead of three. As it happens, this
technique can be used even when _n_ is not a power of 2. If _n_ is evem we use
the formula _x_<sup>_n_</sup> = (_x_<sup>_n_/2</sup>)<sup>2</sup>. If _n_ is
odd, then _x_<sup>_n_ = _x_ x _x_<sup>_n_-1</sup>. Write a recursive function
that computes _x_<sup>_n_</sup>. (The recursion ends when _n_ = 0, in which case
the function returns 1.) To test your function, write a program that asks the
user to enter values for _x_ and _n_, calls `power` to compute
_x_<sup>_n_</sup>, and then displays the value returned by the function.

### Solution

See `07.c`.
