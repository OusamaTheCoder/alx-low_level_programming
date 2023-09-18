#include "main.h"
#include <stddef.h>
#include "2-strlen.c"

/**
 * print_rev - Print a string in reverse, followed by a new line.
 * @s: A pointer to a string (null-terminated character array).
 */
void print_rev(char *s)
{
	int length = _strlen(s);
	int i;

	if (s != NULL)
	{
		for (i = length - 1; i >= 0; i--)
		{
			_putchar(s[i]);
		}
		_putchar('\n');
	}
}

