# 0x00. C - Hello, World

## Introduction
This repository contains C programs created as part of the low-level programming and algorithms curriculum at ALX - Holberton School. Each program demonstrates a specific concept or task.

## List of Programs

### 0. Preprocessor
- Description: A script that runs a C file through the preprocessor and saves the result into another file.
- Usage: `./0-preprocessor`
- Input: The C file is specified in the `CFILE` variable.
- Output: The preprocessed code is saved in a file named `c`.

### 1. Compiler
- Description: A script that compiles a C file but does not link it.
- Usage: `./1-compiler`
- Input: The C file is specified in the `CFILE` variable.
- Output: An object file is created with the same name as the C file but with the extension `.o`.

### 2. Assembler
- Description: A script that generates the assembly code of a C file and saves it in an output file.
- Usage: `./2-assembler`
- Input: The C file is specified in the `CFILE` variable.
- Output: An assembly code file is created with the same name as the C file but with the extension `.s`.

### 3. Name
- Description: A script that compiles a C file and creates an executable named `cisfun`.
- Usage: `./3-name`
- Input: The C file is specified in the `CFILE` variable.
- Output: An executable named `cisfun` is generated.

### 4. Hello, puts
- Description: A C program that prints "Programming is like building a multilingual puzzle" using the `puts` function.
- Usage: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c && ./a.out`
- Output: "Programming is like building a multilingual puzzle" followed by a newline.

### 5. Hello, printf
- Description: A C program that prints with proper grammar, "but the outcome is a piece of art," using the `printf` function.
- Usage: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-printf.c && ./a.out`
- Output: "but the outcome is a piece of art," followed by a newline.

### 6. Size is not grandeur, and territory does not make a nation
- Description: A C program that prints the size of various types on the computer it is compiled and run on.
- Usage: `gcc 6-size.c -m32 -o size32` or `gcc 6-size.c -m64 -o size64`
- Output: Size information for different data types.

### 7. Intel (Advanced)
- Description: A script that generates the assembly code (Intel syntax) of a C code and saves it in an output file.
- Usage: `./100-intel`
- Input: The C file is specified in the `CFILE` variable.
- Output: An assembly code file is created with the same name as the C file but with the extension `.s` in Intel syntax.

### 8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity (Advanced)
- Description: A C program that prints a specific message to the standard error without using `printf` or `puts`.
- Usage: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o quote 101-quote.c`
- Output: "and that piece of art is useful" - Dora Korpar, 2015-10-19

## Author
- Ousama Oujaber

## Acknowledgements
This project is part of the ALX - Holberton School curriculum.

