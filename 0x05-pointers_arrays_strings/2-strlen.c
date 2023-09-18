#include "main.h"
#include <stddef.h>

/**
 * _strlen - Return the length of a string.
 * @s: A pointer to a string (null-terminated character array).
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	if (s != NULL)
	{
		while (*s != '\0')
		{
			length++;
			s++;
		}
	}

	return (length);
}


