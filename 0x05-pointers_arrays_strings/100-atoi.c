#include <stdio.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The integer value of the input string.
 */
void puts_half(char *str)
{
    int len = 0;
    int i = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    if (len % 2 == 0)
    {
        for (i = len / 2; i < len; i++)
        {
            putchar(str[i]);
        }
    }
    else
    {
        for (i = (len / 2) + 1; i < len; i++)
        {
            putchar(str[i]);
        }
    }
    putchar('\n');
}

