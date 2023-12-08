#include <stdio.h>
#include <string.h>

/**
 * keygen - Generates a valid key for the given username.
 * @username: The username for which the key needs to be generated.
 */
void keygen(char *username)
{
	int i, sum = 0;

	for (i = 0; username[i] != '\0'; i++)
	{
		sum += username[i];
	}

	printf("%s-%d\n", username, sum);
}

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 * Return: 0 on success, 1 on failure.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s username\n", argv[0]);
		return (1);
	}

	keygen(argv[1]);

	return (0);
}
