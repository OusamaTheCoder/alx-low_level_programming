---

# Function Pointers

---

## 0. What's my name (Mandatory)

This program contains a function that prints a name. It demonstrates the use of function pointers in C.

**Prototype**: `void print_name(char *name, void (*f)(char *))`

- `print_name_as_is` - This function prints a name as is.
- `print_name_uppercase` - This function prints a name in uppercase.

To run the program, use the `main` function provided in `0-main.c`.

```c
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_name.c -o a
./a
```

## 1. If you spend too much time thinking about a thing, you'll never get it done (Mandatory)

This program executes a function given as a parameter on each element of an array. It also demonstrates the use of function pointers in C.

**Prototype**: `void array_iterator(int *array, size_t size, void (*action)(int))`

- `print_elem` - Prints an integer.
- `print_elem_hex` - Prints an integer in hexadecimal.

To run the program, use the `main` function provided in `1-main.c`.

```c
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-array_iterator.c -o b
./b
```

## 2. To hell with circumstances; I create opportunities (Mandatory)

This program searches for an integer in an array using a specified comparison function. It demonstrates the use of function pointers in C.

**Prototype**: `int int_index(int *array, int size, int (*cmp)(int))`

- `is_98` - Checks if a number is equal to 98.
- `is_strictly_positive` - Checks if a number is greater than 0.
- `abs_is_98` - Checks if the absolute value of a number is 98.

To run the program, use the `main` function provided in `2-main.c`.

```c
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-int_index.c -o c
./c
```

## 3. A goal is not always meant to be reached, it often serves simply as something to aim at (Mandatory)

This program performs simple operations such as addition, subtraction, multiplication, division, and modulo. It takes command line arguments to specify the operation and operands.

**Usage**: `calc num1 operator num2`

- `+`: Addition
- `-`: Subtraction
- `*`: Multiplication
- `/`: Division
- `%`: Modulo

To run the program, compile the files and execute as shown in the example:

```c
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -o calc
./calc 1 + 1
```

## 4. Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker (Advanced)

This program prints the opcodes of its own main function in hexadecimal. It takes the number of bytes as a command line argument.

**Usage**: `./main number_of_bytes`

To run the program:

```c
gcc -std=gnu89 100-main_opcodes.c -o main
./main 21
```

Please note that the opcodes may vary depending on the platform and compiler.

---

GitHub repository: [alx-low_level_programming](https://github.com/OusamaTheCoder/alx-low_level_programming)

Directory: 0x0F-function_pointers

Feel free to explore and use these C programs related to function pointers!

---

**Author**: `OusamaTheCoder`

---
