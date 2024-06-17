# Integer Arithmetic

## Unsigned Addition

- Given two unsigned integers $x$ and $y$, with word size $w$, we know that $0 \leq x, y < 2^w$.
- the sum $x + y$ has a range of $0 \leq x + y \leq 2^{w + 1}$.
- Therefore the sum of two $w$-bit unsigned integers may require $w + 1$ bits.
- If that's the case, the result is truncated to $w$ bits by dropping the most significant bit.

Definition:

For $x$ and $y$ such that $0 \leq x, y < 2^w$:

$$
x + y =
\begin{cases}
x + y & \text{if } 0 \leq x + y < 2^w \\
x + y - 2^w & \text{if } 2^w \leq x + y < 2^{w + 1}
\end{cases}
$$


