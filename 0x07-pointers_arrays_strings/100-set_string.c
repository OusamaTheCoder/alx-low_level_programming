#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Double pointer to char.
 * @to: Pointer to char with the value to be set.
 */
void set_string(char **s, char *to)
{
	*s = to;
}

