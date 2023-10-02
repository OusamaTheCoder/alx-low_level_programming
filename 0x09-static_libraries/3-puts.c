#include "main.h"
#include <stddef.h>

/**
 * _puts - Print a string followed by a new line to stdout.
 * @str: A pointer to a string (null-terminated character array).
 */
void _puts(char *str)
{
	if (str != NULL)
	{
		while (*str != '\0')
		{
			_putchar(*str);
			str++;
		}
		_putchar('\n');
	}
}

