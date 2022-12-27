#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional array of
 * integers and initializes each element of the grid to 0
 * @width: number of columns in the array
 * @height: number of rows in the array
 *
 * Return: a double pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int i, j, k, **array;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (!array)
		return (NULL);

	for (i = 0; i < height; i++)
		array[i] = malloc(sizeof(int) * width);

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
			array[j][k] = 0;
	}

	return (array);
}
