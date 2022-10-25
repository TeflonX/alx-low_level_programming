#include "main.h"

/**
 * swap_int - swaps the value of integers.
 * Return: void.
 * @a: integer pointer.
 * @b: integer pointer.
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *a;

	*a = *b;

	*b = t;
}
