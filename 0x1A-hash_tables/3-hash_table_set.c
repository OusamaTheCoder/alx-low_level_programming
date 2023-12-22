#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: is the key, can not be an empty string
 * @value: the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node = NULL;
	char *value_copy = NULL;

	if (!ht || !key || !value)
		return (0);
	value_copy = strdup(value);
	if (!value_copy)
		return (0);

	/* Get the key's index from the key_index function*/
	index = key_index((const unsigned char *)key, ht->size);

	/* where the key already exists */
	if (ht->array[index] && *(ht->array[index]->key) == *key)
	{
		free(ht->array[index]->value);
		ht->array[index]->value = value_copy;
		return (1);
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}
	new_node->value = value_copy;
	new_node->next = NULL;

	/* adding the new node at the beginning of array */
	if (ht->array[index])
	{
		new_node->next = ht->array[index];
	}
	ht->array[index] = new_node;
	return (1);
}
