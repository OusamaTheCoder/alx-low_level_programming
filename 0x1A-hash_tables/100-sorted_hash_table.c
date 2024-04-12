#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table
 * @size: Size of the hash table
 * Return: Pointer to the newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = malloc(sizeof(shash_table_t));

	if (!ht)
		return (NULL);

	ht->size = size;
	ht->array = calloc(size, sizeof(shash_node_t *));
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}
	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}

/**
 * shash_table_set - Adds a key-value pair to the hash table
 * @ht: Hash table to add or update the key/value to
 * @key: Key to add or update
 * @value: Value to add or update
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *node, *new_node, *tmp;

	if (!ht || !key || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	if (node)
	{
		free(node->value);
		node->value = strdup(value);
		return (1);
	}

	new_node = malloc(sizeof(shash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	if (!ht->shead)
	{
		ht->shead = ht->stail = new_node;
		new_node->sprev = new_node->snext = NULL;
	}
	else
	{
		tmp = ht->shead;
		while (tmp && strcmp(tmp->key, key) < 0)
			tmp = tmp->snext;

		if (!tmp)
		{
			new_node->sprev = ht->stail;
			new_node->snext = NULL;
			ht->stail->snext = new_node;
			ht->stail = new_node;
		}
		else
		{
            new_node->snext = tmp;
            new_node->sprev = tmp->sprev;
            if (tmp->sprev)
                tmp->sprev->snext = new_node;
            else
                ht->shead = new_node;
            tmp->sprev = new_node;
        }
    }

    return (1);
}

/**
 * shash_table_get - Retrieves a value associated with a key
 * @ht: Hash table to look into
 * @key: Key to look for
 * Return: Value associated with the element, or NULL if key couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
    unsigned long int index;
    shash_node_t *node;

    if (!ht || !key)
        return (NULL);

    index = key_index((const unsigned char *)key, ht->size);
    node = ht->array[index];

    while (node && strcmp(node->key, key) != 0)
        node = node->next;

    return (node ? node->value : NULL);
}

/**
 * shash_table_print - Prints a sorted hash table
 * @ht: Hash table to print
 */
void shash_table_print(const shash_table_t *ht)
{
    shash_node_t *node;

    if (!ht)
        return;

    node = ht->shead;
    printf("{");
    while (node)
    {
        printf("'%s': '%s'", node->key, node->value);
        node = node->snext;
        if (node)
            printf(", ");
    }
    printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order
 * @ht: Hash table to print
 */
void shash_table_print_rev(const shash_table_t *ht)
{
    shash_node_t *node;

    if (!ht)
        return;

    node = ht->stail;
    printf("{");
    while (node)
    {
        printf("'%s': '%s'", node->key, node->value);
        node = node->sprev;
        if (node)
            printf(", ");
    }
    printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table
 * @ht: Hash table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
    shash_node_t *node, *tmp;
    unsigned long int i;

    if (!ht)
        return;

    for (i = 0; i < ht->size; i++)
    {
        node = ht->array[i];
        while (node)
        {
            tmp = node->next;
            free(node->key);
            free(node->value);
            free(node);
            node = tmp;
        }
    }
    free(ht->array);
    free(ht);
}
