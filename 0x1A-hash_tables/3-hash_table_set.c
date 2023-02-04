#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *set;

	unsigned long int ret_val;

	ret_val = key_index((unsigned char *)key, ht->size);
	
	set = malloc((strlen(value) + 1) * sizeof(char));
	if (!set)
	{
		ht->array[ret_val] = set;

		(ht->array[ret_val])->value = strdup(value);

		return (1);
	}
	else
		return (0);
}
