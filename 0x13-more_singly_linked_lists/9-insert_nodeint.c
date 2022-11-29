#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - a function that inserts a new node at
 * a given position.
 * Return: *head (pointer to the head node)
 * @head: double pointer to the head node.
 * @idx: index of the new node.
 * @n: integer component of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head,
unsigned int idx, int n)
{
	listint_t *trav, *temp;

	unsigned int i;

	temp = malloc(sizeof(listint_t));
	if (!temp || !*head)
		return (NULL);

	trav = *head;
	i = 0;
	while (i < (idx - 1))
	{
		trav = trav->next;
		i++;
	}
	temp->n = n;
	temp->next = trav->next;
	trav->next = temp;
	return (*head);
}
