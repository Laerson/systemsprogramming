# Information Storage

## Introduction

- Most computer access blocks of 8 bits (bytes) instead of individual bits.
- A Machine level program views memory as a large array of bytes, referred to as virtual memory.
- Each byte of memory has an address, which is an unique non-negative integer.
- The set of all possible addresses is called the virtual address space.
- The virtual address space is an abstraction of the whole memory implementation of the system.
- The compiler and run-time system partitions the virtual address space into units to store different program objects.
- The value of a pointer in C is the virtual address of the first byte of the object it points to.
- The type of a pointer is an information that the C compiler uses to know how to generate the machine code to access the object pointed to by the pointer.
- The machine code has no information about the data types of the objects in memory.

## Hexadecimal Notation

This section deals with conversion of binary, hexadecimal and decimal notation. The student should be comfortable with doing conversions between these notations.

Practise problems 2.1~2.4 should work as a revision of the concepts.

## Data Sizes

- Word size is the nominal size of pointer data.
  - The word size determines the maximum size of the virtual address space.

  - $\text{If }w \text{ is the word size, then the virtual address can only have at most } 2^w \text{bytes.}$

| C numerical types | Common sizes (64bits) | Common sizes (32bits) | Guaranteed minimum sizes |
|-------------------|-----------------------|-----------------------|--------------------------|
| char              | 1 byte                | 1 byte                | 1 byte                   |
| short             | 2 bytes               | 2 bytes               | 2 bytes                  |
| int               | 4 bytes               | 4 bytes               | 2 bytes                  |
| long              | 8 bytes               | 4 bytes               | 4 bytes                  |
| long long         | 8 bytes               | 8 bytes               | 8 bytes                  |
| float             | 4 bytes               | 4 bytes               | 4 bytes                  |
| double            | 8 bytes               | 8 bytes               | 8 bytes                  |
| long double       | 16 bytes              | 12 bytes              | 10 bytes                 |
|intN_t (int8_t, int16_t, int32_t, int64_t)|N bytes|N bytes|N bytes|
|uintN_t (uint8_t, uint16_t, uint32_t, uint64_t)|N bytes|N bytes|N bytes|
| size_t           | 8 bytes               | 4 bytes               |                  |
| char *           | 8 bytes               | 4 bytes               |                  |

Most types can be signed or unsigned. Signed types (default) are integers that can represent both positive and negative numbers. Unsigned types can only represent non-negative numbers.

Signed and unsigned types have different representations in memory, signed types usually use the two's complement representation.

## Ordering of Bytes

- The ordering of bytes in memory is called endianness.
- Big-endian: Most significant byte stored at the smallest address.
- Little-endian: Least significant byte stored at the smallest address.

Most modern systems are little-endian. There are some CPUs that can be configured to be either big-endian or little-endian, however the operating system dictates the endianness of the system.

There are a few rare systems that are big-endian, like the IBM z/Architecture, and machines from Oracle/Sun Microsystem.

It is important to keep in mind that most systems are little-endian, because when visualizing text representations of memory, the bytes will be shown in reverse order

**IMPORTANT**: Reverse bytes don't mean reverse bits. For example, the 32-bit integer 0x12345678 is stored as 0x78 0x56 0x34 0x12 in little-endian systems and as 0x12 0x34 0x56 0x78 in big-endian systems.

## Representing Strings

- Strings in C are represented as an array of characters terminated by a null character (that has value 0).
- Each character is represented in some form of standard encoding (ASCII, UTF-8, etc).

Try yourself: Run the show_bytes function passing the string "12345" and size 6 (remember that the string is the array ['1', '2', '3', '4', '5', '\0'], so it has 6 elements), and check the output.
