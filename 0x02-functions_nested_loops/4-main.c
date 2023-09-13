#include "main.h"

/**
 * main - Checks the _isalpha function.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _isalpha('H');
    _putchar(r + '0'); // Prints the result of _isalpha('H')
    r = _isalpha('o');
    _putchar(r + '0'); // Prints the result of _isalpha('o')
    r = _isalpha(108);
    _putchar(r + '0'); // Prints the result of _isalpha(108)
    r = _isalpha(';');
    _putchar(r + '0'); // Prints the result of _isalpha(';')
    _putchar('\n');    // Prints a newline character
    return (0);
}

