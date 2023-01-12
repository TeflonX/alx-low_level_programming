#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - a function that returns the nth node
 * of a dlistint_t linked list
 * @head: pointer to the head node
 * @index: index of node to be returned
 *
 * Return: address to the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head)
	{
		dlistint_t *trav, *assign;

		unsigned int count, i;

		trav = assign = head;
		count = 0;
		while (trav->next)
		{
			count++;
			trav = trav->next;
		}

		if (index >= count)
			return (NULL);

		for (i  = 0; i < index; i++)
		{
			assign = assign->next;
		}

		return (assign);
	}
	else
		return (NULL);
}
