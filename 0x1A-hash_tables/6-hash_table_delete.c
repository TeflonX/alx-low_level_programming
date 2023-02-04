#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_delete - a function that deletes a hash table
 * @ht: hash table
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	hash_node_t *item;

	for (i = 0; i < ht->size; i++)
	{
		item = ht->array[i];
		if (item)
		{
			free(item->key);
			free(item->value);
			free(item);
		}
	}
	free(ht->array);
	free(ht);
}
