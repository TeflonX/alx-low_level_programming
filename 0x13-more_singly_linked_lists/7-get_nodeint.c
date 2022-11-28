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

	unsigned int i;

	int count;

	if (!head)
		return (NULL);

	count = 0;
	temp = head;
	for (i = 1; i < index; i++)
	{
		temp = temp->next;
		if (temp->next == NULL)
		{
			count = 1;
			break;
		}
	}

	if (count == 1)
		return (NULL);
	else
		return (temp->next);
}
