#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - Reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (!new_ptr)
		return (NULL);

	if (ptr)
	{
		if (new_size < old_size)
			old_size = new_size;

		for (i = 0; i < old_size; i++)
			((char *)new_ptr)[i] = ((char *)ptr)[i];

		free(ptr);
	}

	return (new_ptr);
}

