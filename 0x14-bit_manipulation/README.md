---
# 0x14. C - Bit manipulation
---
## C Programming - Bit Manipulation

Author: `OusamaTheCoder`

## Description

This repository contains C programs that demonstrate various bit manipulation techniques in the C programming language. Bit manipulation is a fundamental concept used for working with individual bits within binary data. It is often used for tasks such as binary to integer conversion, binary printing, setting, clearing, and flipping bits, and checking endianness.

## Learning Objectives
By working on this project, you will gain a better understanding of the following concepts:

- Binary operations and bit manipulation in C.
- Converting binary numbers to unsigned integers.
- Printing binary representations of numbers.
- Manipulating individual bits within integers.
- Understanding and checking endianness.
- Solving advanced challenges involving bit manipulation.

## List of Tasks

### 0. Binary to Unsigned Int
Write a function that converts a binary number to an unsigned int.

- Prototype: `unsigned int binary_to_uint(const char *b);`
- Return: The converted number, or 0 if there is one or more chars in the string `b` that are not 0 or 1, or if `b` is NULL.

### 1. Print Binary
Write a function that prints the binary representation of a number.

- Prototype: `void print_binary(unsigned long int n);`
- Format: See example. You are not allowed to use arrays, malloc, or the % or / operators.

### 2. Get Bit
Write a function that returns the value of a bit at a given index.

- Prototype: `int get_bit(unsigned long int n, unsigned int index);`
- Returns: The value of the bit at index `index` or -1 if an error occurred.

### 3. Set Bit
Write a function that sets the value of a bit to 1 at a given index.

- Prototype: `int set_bit(unsigned long int *n, unsigned int index);`
- Returns: 1 if it worked, or -1 if an error occurred.

### 4. Clear Bit
Write a function that sets the value of a bit to 0 at a given index.

- Prototype: `int clear_bit(unsigned long int *n, unsigned int index);`
- Returns: 1 if it worked, or -1 if an error occurred.

### 5. Flip Bits
Write a function that returns the number of bits you would need to flip to get from one number to another.

- Prototype: `unsigned int flip_bits(unsigned long int n, unsigned long int m);`
- You are not allowed to use the % or / operators.

### 6. Endianness (Advanced)
Write a function that checks the endianness.

- Prototype: `int get_endianness(void);`
- Returns: 0 if big endian, 1 if little endian.

### 7. Crackme3 (Advanced)
Find the password for this program.

- Save the password in the file `101-password`.
- Your file should contain the exact password, no new line, no extra space.

```bash
$ ./crackme3 `cat 101-password`
Congratulations!
```

### Explore the C programs in this repository to enhance your understanding of bit manipulation and improve your programming skills.
---
### Feel free to collaborate and contribute to this project. Happy coding!
---
