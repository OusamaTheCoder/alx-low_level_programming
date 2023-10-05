#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: The number of arguments.
 * @av: An array of argument strings.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	char *concatenated_str;
	int i, j, total_length = 0, current_length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			total_length++;
		total_length++;
	}

	concatenated_str = malloc(sizeof(char) * (total_length + 1));

	if (concatenated_str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			concatenated_str[current_length] = av[i][j];
			current_length++;
		}
		concatenated_str[current_length] = '\n';
		current_length++;
	}

	concatenated_str[current_length] = '\0';

	return (concatenated_str);
}

