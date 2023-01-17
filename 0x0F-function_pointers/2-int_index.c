#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 * @array: pointer to an array
 * @size: size of array
 * @cmp: function pointer
 *
 * Return: index of array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				break;
		}

		if (i == size)
			return (-1);

		return (i);
	}
	else
		return (-1);
}
