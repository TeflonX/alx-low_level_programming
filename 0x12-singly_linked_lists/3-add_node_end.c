#include "lists.h"
#include <stdlib.h>
#include <string.h>


list_t *add_node_end(list_t **head, const char *str)
{
	int i;

	list_t *move;

	list_t *temp;

	int count = 1;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);
	
	temp->next = NULL;
	temp->str = strdup(str);
	temp->len = strlen(str);

	move = *head;
	while ((move->next) != NULL)
	{
		move = move->next;
		count++;
	}
	
	move = *head;
	for (i = 1; i <= count; i++)
		move = move->next;

	move->next = temp;

	return (temp);

}
