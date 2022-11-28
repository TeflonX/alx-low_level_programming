#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - a function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n)
 * Return: x (head node's data)
 * @head: double pointer to the head node
 */
int pop_listint(listint_t **head)
{
	listint_t *trav;

	listint_t *new;

	int x;

	trav = new = *head;
	x = trav->n;
	trav = trav->next;
	free(new);
	*head = trav;

	return (x);
}
