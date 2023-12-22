#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 *
 * Return: a pointer to the newly created hash table, NULL if on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;
	hash_table_t *hash_table = NULL;

	/*Allocating memory for hash_table_t structure*/
	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
		return (NULL);

	/*Setting the size of the hash table*/
	hash_table->size = size;

	/* Allocating memory for array of pointers to hash nodes*/
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!(hash_table->array))
		return (NULL);

	/*Initializing each element of the array to NULL*/
	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;

	/* Returns a pointer to the newly created hash table */
	return (hash_table);
}
