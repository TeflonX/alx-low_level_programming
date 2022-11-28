#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - a function that adds a new node at the end of
 * a listint_t list
 * Return: *head (pointer to the head node
 * @head: double pointer to the head node.
 * @n: integer member of the node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	listint_t *trav;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	if (!*head)
	{
		*head = new;
		new->n = n;
		new->next = NULL;
	}
	else
	{
		trav = *head;
		while (trav->next != NULL)
		{
			trav = trav->next;
		}
		trav->next = new;
		new->n = n;
		new->next = NULL;
	}

	return (*head);
}
