#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - a function that returns the nth node of
 * a listint_t linked list
 * Return: address of the nth node
 * @head: pointer to the head node
 * @index: index of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;

	listint_t *trav;

	unsigned int count;

	unsigned int i;

	if (!head)
		return (NULL);

	count = 0;
	temp = trav = head;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}

	if (index > count)
		return (NULL);
	else if (index == 0)
		return (head);
	else if (index == 1)
		return (head->next);
	else
	{
		for (i = 0; i < (index - 1); i++)
			trav = trav->next;
	}

	return (trav->next);
}
