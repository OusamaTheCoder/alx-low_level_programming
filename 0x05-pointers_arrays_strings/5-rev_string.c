#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string
 * @s: The string to reverse
 */
void rev_string(char *s)
{
    int length = 0;
    int start, end;
    char temp;

    while (s[length] != '\0')
    {
        length++;
    }

    start = 0;
    end = length - 1;

    while (start < end)
    {
        temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        start++;
        end--;
    }
}

