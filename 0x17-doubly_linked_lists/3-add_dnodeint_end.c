#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - a function that adds a new node at the
 * end of a dlistint_t list
 * @head: pointer to the head node
 * @n: integer to be inserted in new node
 *
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *trav;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (!*head)
		*head = new;
	else
	{
		trav = *head;
		while (trav->next)
		{
			trav = trav->next;
		}

		trav->next = new;
		new->prev = trav;
	}

	return (new);
}
