#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - a function that deletes the node at index index
 * of a listint_t linked list
 * Return: 1 if successful or -1 if failed.
 * @head: double pointer to the head node.
 * @index: the index of node to be deleted.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *trav, *temp1, *temp2;

	unsigned int i, count;

	count = 0;
	temp2 = NULL;
	temp1 = *head;
	while (temp1 != NULL)
	{
		temp1 = temp1->next;
		count++;
	}

	if (index >= count)
		return (-1);
	if (index == 0)
	{
		temp1 = *head;
		*head = temp1->next;
		free(temp1);
		count = 0;
	}
	if (index > 0 && index < count)
	{
		trav = *head;
		for (i = 0; i < (index - 1); i++)
			trav = trav->next;
		temp2 = trav->next;
		trav->next = (trav->next)->next;
		free(temp2);
		count = 0;
	}
	if (count == 0)
		return (1);
	else
		return (-1);
}
