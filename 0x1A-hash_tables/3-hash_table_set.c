#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>
/**
 * hash_table_set - function that adds an element to a hash table
 * @ht: hash table
 * @key: key
 * @value: value associated with key
 *
 * Return: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *current;

	unsigned long int index, val;

	if (strlen(key) == 0 || !value || !key)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	current = ht->array[index];
	val = 0;
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			val = 1;
			break;
		}

		current = current->next;
	}
	if (val == 1)
		return (1);

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->value = strdup(value);
	new_node->key = strdup(key);
	if (ht->array[index])
		new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
