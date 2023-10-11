#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: the array to process
 * @size: the size of the array
 * @action: a pointer to the function to be executed on each element
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

