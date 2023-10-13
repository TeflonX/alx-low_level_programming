#include "lists.h"
#include <stdlib.h>
/**
 * index_not_zero_nor_count - inserts a new node at nth index
 * @h: pointer to the head node
 * @new: pointer to newly created node
 * @idx: index to insert the node at.
 *
 * Return: nothing
 */
void index_not_zero_nor_count(dlistint_t **h, dlistint_t *new,
		unsigned int idx)
{
	dlistint_t *trav1, *trav2;

	unsigned int i;

	trav1 = trav2 = *h;
	for (i = 0; i < idx - 1; i++)
	{
		trav1 = trav1->next;
		trav2 = trav2->next;
	}
	trav2 = trav2->next;

	new->prev = trav1;
	new->next = trav1->next;
	trav1->next = new;
	trav2->prev = new;
}

/**
 * node_at_end - insert a new node as last node
 * @h: pointer to the head node
 * @new: node to be inserted
 *
 * Return: void
 */
void node_at_end(dlistint_t **h, dlistint_t *new)
{
	dlistint_t *trav1;

	trav1 = *h;
	while (trav1->next)
		trav1 = trav1->next;
	new->prev = trav1;
	trav1->next = new;
}

/**
 * insert_dnodeint_at_index - a function that inserts a
 * new node at a given position
 *
 * @h: pointer to the head node
 * @idx: index to insert new node
 * @n: integer value of new node
 *
 * Return:pointer to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *trav1, *new;

	unsigned int count;

	if (*h)
	{
		new = malloc(sizeof(dlistint_t));
		if (!new)
			return (NULL);
		new->n = n;
		new->prev = NULL;
		new->next = NULL;

		trav1 = *h;
		count = 0;
		while (trav1)
		{
			count++;
			trav1 = trav1->next;
		}

		if (idx > count)
			return (NULL);
		if (idx == 0)
		{
			new->next = *h;
			(*h)->prev = new;
			*h = new;
		}
		if (idx > 0 && idx < count)
			index_not_zero_nor_count(h, new, idx);
		if (idx == count)
			node_at_end(h, new);
		return (new);
	}
	else
		return (NULL);
}
