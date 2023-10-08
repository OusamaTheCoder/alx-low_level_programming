#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - Concatenate two strings with a limit.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of characters from s2 to concatenate.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, result_len;
	char *concat;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	result_len = len1 + n;

	concat = (char *)malloc((result_len + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (i = 0; i < n && s2[i]; i++)
		concat[len1 + i] = s2[i];

	concat[result_len] = '\0';

	return (concat);
}

