#include "lists.h"
/**
 * dlistint_len - a function that returns the number of node in a lined list
 * @h: head pointer
 *
 * Return: number of nodes in the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int count;

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
