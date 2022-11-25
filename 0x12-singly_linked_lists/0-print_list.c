#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * print_list - a function that prints all the elements of a list_t list.
 * Return: number of nodes in singly linked list.
 * @h: pointer to the head of list.
 */
size_t print_list(const list_t *h)
{
	const list_t *temp;

	size_t count = 1;

	temp = h;

	if ((temp->str) == NULL)
		printf("[0] (nil)");

	while ((temp->next) != NULL)
	{
		printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		count++;
	}

	printf("[%d] %s\n", temp->len, temp->str);


	return (count);
}
