#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print -  a function that prints a hash table
 * @ht: hash table
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;

	unsigned long int i;

	if (ht)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			current = ht->array[i];
			if (current)
			{
				printf("\'%s\': \'%s\'", current->key,
					current->value);
				if (i != (ht->size) - 1)
					printf(", ");
			}
		}
		printf("}\n");
	}
}
