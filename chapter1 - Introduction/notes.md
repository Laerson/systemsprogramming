# A Tour of Computer Systems

## Information is Bits + Context

- **All Information is represented as bits**
- **The only thing that distinguishes different data objects is the context in which we view them**

### Example

The file [hello.c](hello.c) is stored as a sequence of bytes (8-bit chunks) in the disk. When this file is opened by a text editor, the bytes are interpreted as ASCII characters and displayed as text.

If we tried opening the same file in a different context (say, as an image viewer), the bytes would be interpreted as pixel values and the program would try to display an image (although odds are the program would not be able to display anything and would treat the file as corrupted).

We can visualize the hexadecimal representation of the file using the following command:

```bash
# Writes the hexadecimal representation of the file to a file ascii_representation.txt
xxd -p hello.c | tr -d '\n' | sed 's/../& /g' | sed 's/ *$//' | fold -w 24 > ascii_representation.txt
```

We can also visualize the binary representation of the file using the following command:

```bash
xxd -b -c 8 hello.c | awk '{print $2$3$4$5$6$7$8$9}' | tr -d '\n' | fold -w 64 | awk '{gsub(/.{8}/,"& "); print}' > binary_representation.txt
```

The results of these commands can be found in the [ascii_representation.txt](ascii_representation.txt) and [binary_representation.txt](binary_representation.txt) files.
