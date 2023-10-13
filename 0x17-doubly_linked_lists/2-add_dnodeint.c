#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - a function that adds a new node at the
 * beginning of a dlistint_t list
 * @head: pointer to the head node
 * @n: integer to be inserted
 *
 * Return: pointer to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head)
		(*head)->prev = new;

	*head = new;

	return (new);
}
