#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_dlistint - a function that prints all the elements
 * of a dlistint_t list
 * @h: pointer to the head of the doubly linked list
 *
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count;

	const dlistint_t *trav;

	trav = h;
	count = 0;
	while (trav)
	{
		printf("%d\n", trav->n);
		count++;
		trav = trav->next;
	}

	return (count);
}
