#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node -  a function that adds a new node at the beginning of a
 * linked list.
 * Return: pointer to the new node inserted.
 * @head: double pointer to the new node.
 * @str: string added to the node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	list_t *size;

	size = malloc(sizeof(list_t));
	if (size == NULL)
		return (NULL);
	temp = size;

	temp->next = *head;
	temp->str = strdup(str);
	temp->len = strlen(str);

	*head = temp;


	return (temp);
}
