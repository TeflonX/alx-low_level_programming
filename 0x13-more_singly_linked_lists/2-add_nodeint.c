#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - a function that adds a new node at the beginning of a
 * listint_t list
 * Return: *head (pointer to the head of node)
 * @head: double pointer to the head node.
 * @n: integer member of the node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
