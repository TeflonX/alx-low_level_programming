#include "lists.h"
#include <stdlib.h>
/**
 * sum_dlistint - a function that returns the sum of all
 * the data (n) of a dlistint_t linked list
 * @head: pointer to the head node
 *
 * Return: sum of n
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *trav;

	int sum;

	if (!head)
		return (0);

	trav = head;
	sum = 0;
	while (trav)
	{
		sum = sum + trav->n;
		trav = trav->next;
	}

	return (sum);
}
