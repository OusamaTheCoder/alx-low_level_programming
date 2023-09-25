#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring.
 * @haystack: The string to search within.
 * @needle: The substring to locate.
 *
 * Return: A pointer to the beginning of the located substring, or NULL if the
 *         substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*haystack && *n && *haystack == *n)
		{
			haystack++;
			n++;
		}

		if (!*n)
			return (h);

		haystack = h + 1;
	}

	return (NULL);
}

