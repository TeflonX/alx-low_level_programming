#include "lists.h"
#include <stdlib.h>
/**
 * listint_len - a function that returns the number of elements in
 * a linked listint_t list
 * Return: count (number of elements in linked list
 * @h: pointer to the head of the list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *new;

	int count;

	if (!h)
		return (0);

	new = h;
	count = 0;
	while (new != 0)
	{
		new = new->next;
		count++;
	}

	return (count);
}
