#include "main.h"
/**
 * reverse_array - a function that reverses array.
 * Return: void (Success)
 * @a: array
 * @n: integer
 */

void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		int temp = a[start];

		a[start] = a[end];
		a[end] = temp;

		start = start + 1;
		end = end - 1;
	}
}
