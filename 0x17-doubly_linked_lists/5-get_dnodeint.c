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
		while (trav)
		{
			count++;
			trav = trav->next;
		}
		if (index == 0)
			return (assign);
		if (index == 1)
			return (assign->next);
		if (index > count)
			return (NULL);
		if (index > 1 && index < count)
		{
			for (i  = 0; i < (index - 1); i++)
			{
				assign = assign->next;
			}
		}

		return (assign->next);
	}
	else
		return (NULL);
}
