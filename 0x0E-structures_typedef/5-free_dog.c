#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - a function that frees a struct data type
 * @d: pointer of data type, dog_t
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
