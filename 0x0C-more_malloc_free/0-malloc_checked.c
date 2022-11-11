#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - a function that allocates memory using malloc.
 * Return: void.
 * @b: an unsigned value of memory space.
 */

void *malloc_checked(unsigned int b)
{
	void *p = NULL;

	p = malloc(sizeof(*p) * b);

	if (p == NULL)
	{
		exit(98);
	}
	else
	{
		return (p);
	}
}
