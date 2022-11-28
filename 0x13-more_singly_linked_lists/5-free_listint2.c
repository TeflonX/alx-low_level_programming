#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - a function that frees a listint_t list.
 * Return: void
 * @head: double pointer to the head node
 */
void free_listint2(listint_t **head)
{
	listint_t *new;

	listint_t *trav;

	trav = *head;
	while (trav->next != NULL)
	{
		new = trav;
		trav = trav->next;
		free(new);
	}
	free(trav);
	*head = NULL;
}
