#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - a function that reallocates a memory block using
 * malloc and free
 * @ptr: pointer to the old memory area
 * @old_size: size in bytes, of the old memory area
 * @new_size: size in bytes, of the new memory area
 *
 * Return: nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (!ptr)
	{
		p = malloc(new_size);
		if (!p)
			return (NULL);

		return (p);
	}

	if (new_size > old_size)
	{
		p = malloc(new_size);
		if (!p)
			return (NULL);

		memcpy(p, ptr, old_size);
		free(ptr);
	}

	if (old_size == new_size)
		return (ptr);

	if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}

	return (p);
}
