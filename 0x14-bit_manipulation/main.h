#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/* Converts a binary string to an unsigned integer */
unsigned int binary_to_uint(const char *b);

/* Prints the binary representation of a number */
void print_binary(unsigned long int n);

/* Gets the value of a bit at a given index */
int get_bit(unsigned long int n, unsigned int index);

/* Sets the value of a bit to 1 at a given index */
int set_bit(unsigned long int *n, unsigned int index);

/* Sets the value of a bit to 0 at a given index */
int clear_bit(unsigned long int *n, unsigned int index);

/*  Counts bit flips to change numbers */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/* Checks the endianness of the system */
int get_endianness(void);

#endif /* MAIN_H */

