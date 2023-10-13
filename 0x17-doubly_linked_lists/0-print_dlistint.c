#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a doubly-linked
 * list
 * @h: a pointer to the head of the list
 *
 * Return: Number of node on the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int count;

	if (h)
	{
		count = 0;
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			count++;
		}
	}
	return (count);
}
