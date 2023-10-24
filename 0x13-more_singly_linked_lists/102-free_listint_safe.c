#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: A pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *tmp;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
		count++;
		tmp = current;
		current = current->next;
		free(tmp);

		if (tmp <= current)
		{
			*h = NULL;
			return (count);
		}
	}

	*h = NULL;
	return (count);
}

