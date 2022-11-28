#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - a function that adds a new node at the end of
 * a singly linked list.
 * Return: pointer to the head of the list.
 * @head: pointer to the head.
 * @str: string member of the node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;

	list_t *trav;

	trav = *head;

	temp = malloc(sizeof(list_t));

	if (!temp)
		return (NULL);

	if (!*head)
	{
		*head = temp;
		temp->next = NULL;
		temp->str = strdup(str);
		temp->len = strlen(str);
	}
	else
	{
		while (trav->next != NULL)
			trav = trav->next;

		trav->next = temp;
		temp->next = NULL;
		temp->str = strdup(str);
		temp->len = strlen(str);
	}

	return (*head);
}
