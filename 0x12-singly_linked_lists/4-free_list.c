#include "lists.h"
#include <stdlib.h>
/**
 * free_list - a function that prints linked list.
 * Return: void.
 * @head: a pointer argument.
 */
void free_list(list_t *head)
{
	list_t *new;
	list_t *temp;
	
	head = temp;
	while (temp != NULL)
	{
		new = temp;
		temp = temp->data;
		free(new);
	}
}
