#include "lists.h"
/**
 * dlistint_len - a function that returns the number of elements
 * in a linked dlistint_t list
 * @h: pointer to the head of the doubly linked list
 *
 * Return: number of node
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	const dlistint_t *trav;

	trav = h;
	count = 0;
	while (trav)
	{
		count++;
		trav = trav->next;
	}

	return (count);
}
