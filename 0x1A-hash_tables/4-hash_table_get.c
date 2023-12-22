#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key: is the key you are looking for
 *
 * Return: the value associated with element or null
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (!ht || !key)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	while (ht->array[index])
	{
		if (*(ht->array[index]->key) == *key)
		{
			return (ht->array[index]->value);
		}
		ht->array[index] = ht->array[index]->next;
	}
	return (NULL);
}
