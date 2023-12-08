#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to a pointer to the head of the list
 * @idx: Index where the new node should be added
 * @n: Value to be stored in the new node
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int to_index = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (*h == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*h = new_node;
		return (new_node);
	}

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (to_index < idx - 1)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		to_index++;
	}

	if (temp->next == NULL)
	{
		temp->next = new_node;
		new_node->prev = temp;
		new_node->next = NULL;
		return (new_node);
	}

	new_node->next = temp->next;
	temp->next = new_node;
	new_node->prev = temp;
	new_node->next->prev = new_node;
	return (new_node);
}

