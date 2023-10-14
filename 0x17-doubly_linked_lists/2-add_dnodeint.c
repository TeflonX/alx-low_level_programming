#include "lists.h"
/**
 * add_dnodeint - a function that adds a new node at the beginning of a
 * dlistint_t list.
 * @head: double pointer to the head node
 * @n: integer
 *
 * Return: pointer to the head node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *p1, *p2;


	p2 = malloc(sizeof(dlistint_t));
	if (!p2)
		return (NULL);

	p1 = *head;
	p2->prev = NULL;
	p2->n = n;
	p2->next = p1;

	if (p1)
		p1->prev = p2;
	*head = p2;
	return (p2);
}
