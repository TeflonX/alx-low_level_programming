#include "lists.h"
#include <stdlib.h>
#include <string.h>


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);
	
	temp->next = NULL;
	temp->str = strdup(str);
	temp->len = strlen(str);

	while (head->next != NULL)
		head = head->next;

	head->next = temp;

	return (temp);

}
