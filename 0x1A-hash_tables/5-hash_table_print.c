#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	char *separator = "";

	if (ht)
	{
		printf("{");
		while (index < ht->size)
		{
			while (ht->array[index])
			{
				if (separator)
					printf("%s", separator);
				printf("'%s': '%s'", ht->array[index]->key, ht->array[index]->value);
				ht->array[index] = ht->array[index]->next;
				separator = ", ";
			}
			index++;
		}
		printf("}\n");
	}
}
