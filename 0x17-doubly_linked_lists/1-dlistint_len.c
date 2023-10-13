#include "lists.h"

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
