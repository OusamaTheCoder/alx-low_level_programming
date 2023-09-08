#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0)); /* Seed the random number generator */

	n = rand() - RAND_MAX / 2; /* Generate a random number */

	printf("%d is ", n); /* Print the random number */

	if (n > 0)
	{
		printf("positive\n");
	}
	else if (n < 0)
	{
		printf("negative\n");
	}
	else
	{
		printf("zero\n");
	}

	return (0);
}
