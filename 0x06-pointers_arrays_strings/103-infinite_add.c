#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * infinite_add - Adds two numbers represented as strings
 * @n1: The first number as a string
 * @n2: The second number as a string
 * @r: The buffer to store the result
 * @size_r: The size of the buffer
 *
 * Return: A pointer to the result, or 0 if the result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int i = strlen(n1) - 1;
	int j = strlen(n2) - 1;
	int k = 0;

	while (i >= 0 || j >= 0 || carry)
	{
		int digit1 = (i >= 0) ? (n1[i] - '0') : 0;
		int digit2 = (j >= 0) ? (n2[j] - '0') : 0;
		int sum = digit1 + digit2 + carry;

		carry = sum / 10;

		if (k < size_r - 1)
		{
			r[k] = (sum % 10) + '0';
			k++;
		}
		else
		{
			return (NULL);
		}

		if (i >= 0)
			i--;
		if (j >= 0)
			j--;
	}

	r[k] = '\0';

	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		char temp = r[i];

		r[i] = r[j];
		r[j] = temp;
	}

	return (r);
}

