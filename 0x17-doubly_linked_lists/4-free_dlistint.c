#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - a function that frees a dlistint_t list
 * @head: pointer to the head node
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *new;

	while (head)
	{
		new = head;
		head = head->next;
		free(new);
	}
}
