#include "main.h"
#include <stddef.h>

/**
 * swap_int - Swap the values of two integers.
 * @a: A pointer to the first integer.
 * @b: A pointer to the second integer.
 */
void swap_int(int *a, int *b)
{
	int temp;

	if (a != NULL && b != NULL)
	{
		temp = *a;
		*a = *b;
		*b = temp;
	}
}

