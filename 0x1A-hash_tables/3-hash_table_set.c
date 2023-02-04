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
	
	set = malloc(sizeof(hash_node_t));
	if (!set)
	{
		set->value = malloc((strlen(value) + 1) * sizeof(char));
		set->value = strdup(value);
		set->key = malloc((strlen(key) + 1) * sizeof(char));
		set->next = NULL;

		if (!(ht->array[ret_val]))
		{
			ht->array[ret_val] = set;
		}
		else
		{
			(ht->array[ret_val])->next = set;
		}
		return (1);
	}
	else
		return (0);
}
