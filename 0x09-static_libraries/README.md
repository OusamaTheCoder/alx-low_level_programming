---

# 0x09. C - Static Libraries

---

## Description

**Author**: `OusamaThe`

This repository contains C programs and scripts related to static libraries in C programming. It includes two main components:

1. **Static Library (libmy.a)**: This library, named `libmy.a`, contains various C functions. These functions cover a range of tasks, such as character manipulation, string operations, and more. The library is created from individual C source files.

2. **Script (create_static_lib.sh)**: The `create_static_lib.sh` script automates the process of creating a static library. It compiles all the C source files in the current directory and generates the `liball.a` static library.

## List of Functions

Here's a list of functions included in the `libmy.a` static library:

- `int _putchar(char c);`
- `int _islower(int c);`
- `int _isalpha(int c);`
- `int _abs(int n);`
- `int _isupper(int c);`
- `int _isdigit(int c);`
- `int _strlen(char *s);`
- `void _puts(char *s);`
- `char *_strcpy(char *dest, char *src);`
- `int _atoi(char *s);`
- `char *_strcat(char *dest, char *src);`
- `char *_strncat(char *dest, char *src, int n);`
- `char *_strncpy(char *dest, char *src, int n);`
- `int _strcmp(char *s1, char *s2);`
- `char *_memset(char *s, char b, unsigned int n);`
- `char *_memcpy(char *dest, char *src, unsigned int n);`
- `char *_strchr(char *s, char c);`
- `unsigned int _strspn(char *s, char *accept);`
- `char *_strpbrk(char *s, char *accept);`
- `char *_strstr(char *haystack, char *needle);`

## Usage

To compile the library and test it with a sample program, follow these steps:

1. Run the `create_static_lib.sh` script to create the `liball.a` static library:
   ```
   ./create_static_lib.sh
   ```

2. Compile your program with the library using `gcc`. For example, to compile `main.c` with `liball.a`:
   ```
   gcc -std=gnu89 main.c -L. -lall -o my_program
   ```

3. Run your program:
   ```
   ./my_program
   ```

Enjoy exploring these C functions and static library!

---
