#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - a function that returns the sum of all the data (n) of
 * a listint_t linked list
 * Return: sum of all the node data
 * @head: pointer to the head node
 */
int sum_listint(listint_t *head)
{
	listint_t *trav;
	int sum;

	if (!head)
		return (0);

	sum = 0;
	trav = head;
	while (trav != NULL)
	{
		sum = sum + (trav->n);
		trav = trav->next;
	}

	return (sum);
}
