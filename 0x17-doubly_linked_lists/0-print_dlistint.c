#include "lists.h"
/**
 * print_dlistint - a function that prints all the elements of a dlistint_t
 * list.
 * @h: pointer to the head of the linked list
 *
 * Return: count variable
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int count;

	const dlistint_t *trav;

	count = 0;
	trav = h;
	while (trav)
	{
		printf("%d\n", trav->n);
		count++;
		trav = trav->next;
	}

	return (count);
}
