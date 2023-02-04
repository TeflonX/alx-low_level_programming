#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - a function that creates a hash table.
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;

	hash_table_t *table;

	hash_node_t **item;

	table = malloc(sizeof(hash_table_t));
	if  (!table)
		return (NULL);

	item = malloc(size * sizeof(hash_node_t *));
	if (!item)
		return (NULL);

	table->size = size;
	table->array = item;

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
