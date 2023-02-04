#include "hash_tables.h"
#include <string.h>
#include <stddef.h>
/**
 * hash_table_get - a function that retrieves a value associated with a key
 * @ht: hash table under consideration
 * @key: key you are looking fr
 *
 * Return: pointer to value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	hash_node_t *current;

	index = key_index((unsigned char *)key, ht->size);

	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
			break;

		current = current->next;
	}
	if (!current)
		return (NULL);

	return (current->value);
}
