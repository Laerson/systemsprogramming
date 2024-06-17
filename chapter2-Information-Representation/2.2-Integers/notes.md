# Integer Representations

## Unsigned Encodings

- Unsigned encodings are used to represent non-negative integers.
- A binary number with $w$ bits can represent $2^w$ different values.
- The unsigned encoding maps the binary representation directly to the integer value.
- The range of values that can be represented by an unsigned encoding is $0$ to $2^w - 1$.

## Two's Complement Encodings

- Two's complement encodings are used to represent signed integers.
- The encoding is similar to unsigned encoding, but the MSB has negative weight.
  - e.g. For vector $\vec{x} = [x_{w-1}, x_{w-2}, \ldots, x_1, x_0]$, the value represented is $-x_{w-1} \times 2^{w-1} + \sum_{i=0}^{w-2} x_i \times 2^i$.
- The range of values that can be represented by a two's complement encoding is $-2^{w-1}$ to $2^{w-1} - 1$.
- Two's complement encodings have the property that the addition and subtraction of two numbers can be done using the same hardware as unsigned numbers.
- Positive numbers have the same representation in both unsigned and two's complement encodings.

## Conversions between Signed and Unsigned

- In C, conversions between signed and unsigned integers do not change the bit pattern, only how the bit pattern is interpreted.

### Converting Signed to Unsigned

- If the signed integer is non-negative, the bit pattern is the same in both signed and unsigned encodings.
- If the signed integer $x$ is negative, the unsigned integer $y$ that represents the same value is $y = x + 2^w$, where $w$ is the number of bits in the representation.

### Converting Unsigned to Signed

- If the unsigned integer is less than $2^{w-1}$, the bit pattern is the same in both signed and unsigned encodings.
- If the unsigned integer $y$ is greater than or equal to $2^{w-1}$, the signed integer $x$ that represents the same value is $x = y - 2^w$.

### Signed versus Unsigned in C

- When an operation involves both signed and unsigned integers, the signed integer is converted to unsigned.
- This can lead to unituitive results (see problem 2.21)

## Expanding the Bit Representation

- To expand a unsigned number to a larger number of bits, the most significant bits are filled with zeros.
- To expand a two's complement number to a larger number of bits, the most significant bits are filled with the sign bit.

## Truncating the Bit Representation

- To truncate a unsigned number to a smaller number of bits, the most significant bits are discarded.

Let $x$ be a $w$-bit number and $y$ be a $k$-bit number, where $k < w$. The truncation of $x$ to $k$ bits is given by $y = x \mod 2^k$.

- To truncate a two's complement number to a smaller number of bits, the most significant bits are discarded.
- To calculate the truncated value, we first find the unsigned value of the number, calculate the truncated value, and then convert it back to two's complement.
