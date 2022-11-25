#include "lists.h"
#include <string.h>
#include <stdlib.h>

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
