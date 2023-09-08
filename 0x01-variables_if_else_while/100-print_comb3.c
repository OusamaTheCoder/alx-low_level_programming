#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tens_digit = 0;
	int ones_digit;

	while (tens_digit <= 8)
	{
		ones_digit = tens_digit + 1;

		while (ones_digit <= 9)
		{
			putchar(tens_digit + '0');
			putchar(ones_digit + '0');

			if (tens_digit != 8 || ones_digit != 9)
			{
				putchar(',');
				putchar(' ');
			}

			ones_digit++;
		}

		tens_digit++;
	}

	putchar('\n');

	return (0);
}

