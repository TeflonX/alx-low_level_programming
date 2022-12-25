#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function that prints the sum of the two diagonals of a
 * square matrix of integers
 * @a: pointer to the matrix
 * @size: size of the matrix
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, i, j;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size * size; i += (size + 1))
		sum1 = sum1 + *(a + i);

	for (j = size - 1; j < (size * size) - 1; j += (size - 1))
		sum2  = sum2 + *(a + j);

	printf("%d, %d\n", sum1, sum2);
}
