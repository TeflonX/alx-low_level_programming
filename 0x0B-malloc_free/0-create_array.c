#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars, and initializes
 * it with a specific char.
 *
 * Return: a char pointer.
 * @size: length of string, unsigned int.
 * @c: character to be replaced.
 */

char *create_array(unsigned int size, char c)
{
	char *s;

	unsigned int i;

	s = malloc((size) * sizeof(char));

	if (s == NULL || size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		*(s + i) = c;
	}
	*(s + i) = '\0';

	return (s);

}
