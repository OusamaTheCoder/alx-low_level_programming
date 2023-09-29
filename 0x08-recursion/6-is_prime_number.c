#include "main.h"
#include <math.h>
#include <stdio.h>

/**
 * is_divisible - Checks if a number is divisible.
 * @n: The number to check for divisibility.
 * @divisor: The current divisor to check.
 *
 * Return: 1 if n is divisible by any number from 2 to sqrt(n), 0 otherwise.
 */
int is_divisible(int n, int divisor)
{
	if (divisor <= 1)
		return (0);
	if (n % divisor == 0)
		return (1);
	return (is_divisible(n, divisor - 1));
}

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The integer to check for primality.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	if (n % 2 == 0 || n % 3 == 0)
		return (0);
	return (!is_divisible(n, (int)sqrt(n)));
}

