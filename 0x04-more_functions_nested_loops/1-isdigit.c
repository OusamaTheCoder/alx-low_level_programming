#include "main.h"

/**
 * _isdigit - check if numbers are 0 - 9
 * @c: char to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
    return (c >= '0' && c <= '9') ? 1 : 0;
}

