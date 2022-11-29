#include "lists.h"
#include <stdlib.h>

listint_t *insert_nodeint_at_index(listint_t **head,
unsigned int idx, int n)
{
	listint_t *trav;

	listint_t *temp;

	unsigned int i;

	if (!*head)
		return (NULL);

	temp = malloc(sizeof(listint_t));
	
	if (!temp)
		return (NULL);

	trav = *head;
	for (i = 1; i < idx; i++)
	{
		trav = trav->next;
	}

	temp->next = trav->next;
	temp->n = n;
	trav->next = temp;

	return (*head);
}
