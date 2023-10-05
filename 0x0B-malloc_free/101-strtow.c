#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, word_count = 0, word_length = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')

		{
            word_count++;
            while (str[i] && str[i] != ' ')
                i++;
        }
    }

    if (word_count == 0)
        return NULL;

    words = (char **)malloc(sizeof(char *) * (word_count + 1));

    if (words == NULL)
        return NULL;

    for (i = 0, k = 0; k < word_count; k++)
    {
        while (str[i] == ' ')
            i++;

        for (j = i; str[j] && str[j] != ' '; j++)
            word_length++;

        words[k] = (char *)malloc(sizeof(char) * (word_length + 1));

        if (words[k] == NULL)
        {
            for (k = 0; k < word_count; k++)
                free(words[k]);
            free(words);
            return NULL;
        }

        for (j = 0; str[i] && str[i] != ' '; j++, i++)
            words[k][j] = str[i];

        words[k][j] = '\0';
        word_length = 0;
    }

    words[word_count] = NULL;
    return words;
}

