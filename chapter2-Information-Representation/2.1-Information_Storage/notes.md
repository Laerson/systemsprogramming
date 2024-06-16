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
