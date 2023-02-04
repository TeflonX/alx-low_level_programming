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
	hash_node_t *set;

	unsigned long int ret_val;

	ret_val = key_index((unsigned char *)key, ht->size);

	set = malloc((strlen(value) + 1) * sizeof(char));
	if (!set)
	{
		if (!(ht->array[ret_val]))
		{
			ht->array[ret_val] = set;
			(ht->array[ret_val])->key = (char *)key;
			(ht->array[ret_val])->value = strdup(value);
		}
		else
		{
			(ht->array[ret_val])->next = set;
			set->key = (char *)key;
			set->value = strdup(value);
		}
		return (1);
	}
	else
		return (0);
}
