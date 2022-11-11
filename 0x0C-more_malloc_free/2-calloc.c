#include "main.h"
#include <stdlib.h>
/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * Return: void.
 * @nmemb: number of byte.
 * @size: size of byte.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;

	unsigned int *p;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		*(p + i) = 0;
	}

	return (p);

}
