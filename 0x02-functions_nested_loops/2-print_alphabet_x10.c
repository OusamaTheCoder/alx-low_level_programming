#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times in lowercase
 */
void print_alphabet_x10(void)
{
    char letter;
    int i;

    for (i = 0; i < 10; i++)
    {
        letter = 'a';
        while (letter <= 'z')
        {
            _putchar(letter);
            letter++;
        }
        _putchar('\n');
    }
}

