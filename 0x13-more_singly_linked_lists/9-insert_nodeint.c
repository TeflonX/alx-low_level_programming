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
	listint_t *trav, *temp, *edge, *stag;

	unsigned int i, count;

	temp = malloc(sizeof(listint_t));
	if (!temp || !*head)
		return (NULL);

	trav = temp = edge = stag = *head;
	while (edge != NULL)
	{
		edge = edge->next;
		count++;
	}
	if (idx > count)
		return (NULL);
	if  (idx == 0)
	{
		temp->n = n;
		temp->next = *head;
		*head = temp;
	}
	if (idx == 1)
	{
		temp->n = n;
		temp->next = stag->next;
		stag->next = temp;
	}
	if (idx > 1 && idx < count)
	{
		for (i = 0; i < (idx - 1); i++)
		{
			trav = trav->next;
		}
		temp->n = n;
		temp->next = trav->next;
		trav->next = temp;
	}
	return (*head);
}
