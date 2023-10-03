#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * is_positive_number - Check if a string is a positive number
 * @str: The string to check
 *
 * Return: true if the string is a positive number, false otherwise
 */
bool is_positive_number(const char *str)
{
	if (str == NULL || *str == '\0')
		return (false);

	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (false);
		str++;
	}

	return (true);
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 (Success) or 1 (Error)
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_positive_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}

