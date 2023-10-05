#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * is_space - Check if a character is a space.
 * @c: The character to check.
 *
 * Return: 1 if it's a space, 0 otherwise.
 */
int is_space(char c)
{
    return c == ' ';
}

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
        return NULL;

    for (i = 0; str[i]; i++)
    {
        if (!is_space(str[i]))
        {
            word_count++;
            while (str[i] && !is_space(str[i]))
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
        while (is_space(str[i]))
            i++;

        for (j = i; str[j] && !is_space(str[j]); j++)
            word_length++;

        words[k] = (char *)malloc(sizeof(char) * (word_length + 1));

        if (words[k] == NULL)
        {
            for (k = 0; k < word_count; k++)
                free(words[k]);
            free(words);
            return NULL;
        }

        for (j = 0; str[i] && !is_space(str[i]); j++, i++)
            words[k][j] = str[i];

        words[k][j] = '\0';
        word_length = 0;
    }

    words[word_count] = NULL;
    return words;
}

int main()
{
    char **result = strtow("Talk is cheap. Show me the code.");

    if (result != NULL)
    {
        for (int i = 0; result[i] != NULL; i++)
        {
            printf("%s\n", result[i]);
            free(result[i]);
        }
        free(result);
    }
    return 0;
}

