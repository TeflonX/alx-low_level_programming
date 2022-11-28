#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - a function that prints all the elements of a
 * listint_t linked list
 * Return: count (number of nodes in the list)
 * @h: pointer to head
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *new;

	int count;

	if (!h)
		return (0);

	count = 0;
	new = h;
	while (new != NULL)
	{
		printf("%d\n", new->n);
		new = new->next;
		count++;
	}

	return (count);
}
