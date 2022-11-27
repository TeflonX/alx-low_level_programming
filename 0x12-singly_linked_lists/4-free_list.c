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
	
	while (head != NULL)
	{
		new = head;
		head = head->next;
		free(new);
	}
}
