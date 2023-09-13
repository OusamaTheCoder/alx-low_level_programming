#include "main.h"

/**
 * main - Checks the _islower function.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _islower('H');
    _putchar(r + '0'); // Prints the result of _islower('H')
    r = _islower('o');
    _putchar(r + '0'); // Prints the result of _islower('o')
    r = _islower(108);
    _putchar(r + '0'); // Prints the result of _islower(108)
    _putchar('\n');    // Prints a newline character
    return (0);
}

