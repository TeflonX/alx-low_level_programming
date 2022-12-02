#include "main.h"
#include <stdio.h>

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	int array[i][i];

	sum1 = 0;

	sum2 = 0;

	int *a = array[i][i];

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + array[i][i];
		sum2 = sum2 + array[i][size - i - 1];
	}
	printf("%d, %d\n", sum1, sum2);
}


