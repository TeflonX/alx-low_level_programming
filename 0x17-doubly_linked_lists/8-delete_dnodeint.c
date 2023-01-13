#include "lists.h"
#include <stdlib.h>

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	count = 0;
	temp2 = NULL;
	temp1 = *head;
	while (temp1)
	{
		temp1 = temp1->next;
		count++;
	}
	if (index >= count)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(temp1);
	}
	if (index > 0 && index < count)
	{
		trav = *head;
		for (i = 0; i < (index - 1); i++)
		{
			trav = trav->next;

