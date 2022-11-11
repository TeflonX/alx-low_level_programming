#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers.
 * Return: pointer to the array.
 * @min: minimum value of the integer in the array.
 * @max: maximum value of integer in the array.
 */
int *array_range(int min, int max)
{
	int i;

	int *p;

	if (min > max)
	{
		return (NULL);
	}

	p = malloc(sizeof(*p) * (max - min + 1));

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < max - min + 1; i++)
	{
		*(p + i) = min + i;
	}

	return (p);
}
