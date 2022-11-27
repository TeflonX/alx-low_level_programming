#include "lists.h"
#include <stdlib.h>
/**
 * list_len - a function that returns the number of elements in a linked
 * list.
 * Return: count, number of elements in the linked list.
 * @h: head of the list.
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;

	size_t count = 1;

	if (h == NULL)
		return (0);

	temp = h;

	while ((temp->next) != NULL)
	{
		temp = temp->next;
		count++;
	}

	return (count);
}
