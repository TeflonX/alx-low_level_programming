#include <stdio.h>

/**
 *  main - prints the sum of multiples.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n, i, a;

	a = 15;

	for (i = 1; i <= 66; i = i++)
	{
		n = a + 15;
		a = n;
		if (i == 66)
		{
			printf("%d", n);
		}
	}
	printf("\n");

	return (0);
}
