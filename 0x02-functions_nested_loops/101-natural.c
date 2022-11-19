#include <stdio.h>

/**
 * main - prints the sum of multiples.
 *
 * Return: 0 (Success)
 */
int main(void)
{

	int i, sum;

	sum = 0;
	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
	}
	printf("%d", sum);
	printf("\n");

	return (0);
}
