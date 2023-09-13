#include "main.h"

/**
 * times_table - Print the 9 times table starting from 0
 */
void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++) // Loop for rows
	{
		for (j = 0; j <= 9; j++) // Loop for columns
		{
			product = i * j;

			if (j == 0)
				_putchar('0'); // Print the first number without comma
			else
				_putchar(','); // Print comma and space before other numbers

			// Print the product with proper formatting
			if (product < 10)
				_putchar(' ');
			else
				_putchar((product / 10) + '0'); // Print tens digit

			_putchar((product % 10) + '0'); // Print ones digit
		}
		_putchar('\n'); // Move to the next row after each inner loop
	}
}

