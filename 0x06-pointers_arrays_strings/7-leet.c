#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the input string
 * Return: a pointer to the modified string
 */
char *leet(char *str)
{
	int i, j;
	char leet_letters[] = "aAeEoOtTlL";
	char leet_numbers[] = "4433007711";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; leet_letters[j]; j++)
		{
			if (str[i] == leet_letters[j])
				str[i] = leet_numbers[j];
		}
	}

	return (str);
}

