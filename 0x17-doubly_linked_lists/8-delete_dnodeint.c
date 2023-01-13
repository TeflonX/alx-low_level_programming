#include "lists.h"
#include <stdlib.h>
/**
 * delete_node - delete node at an index
 * @head: pointer to the head node
 * @index: index of node to be deleted
 *
 * Return: nothing
 */
void delete_node(dlistint_t **head, unsigned int index)
{
	dlistint_t *trav1, *trav2, *trav3;

	unsigned int i;

	trav2 = *head;
	for (i = 0; i < index; i++)
		trav2 = trav2->next;
	trav1 = trav2->prev;
	trav3 = trav2->next;
	trav1->next = trav3;
	trav3->prev = trav1;
	free(trav2);
}

/**
 * delete_dnodeint_at_index - a function that deletes the
 * node at index index of a dlistint_t linked list
 *
 * @head: pointer to the head node
 * @index: index of node to delete
 *
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *trav1, *trav2;

	unsigned int count;

	if (!*head)
		return (-1);
	count = 0;
	trav1 = *head;
	while (trav1)
	{
		trav1 = trav1->next;
		count++;
	}
	if (index >= count)
		return (-1);
	if (index == 0)
	{
		trav1 = *head;
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(trav1);
	}
	if (index > 0 && index < count - 1)
		delete_node(head, index);
	if (index == count - 1)
	{
		trav2 = *head;
		while (trav2->next)
			trav2 = trav2->next;
		trav1 = trav2->prev;
		trav1->next = NULL;
		free(trav2);
	}

	return (1);
}
