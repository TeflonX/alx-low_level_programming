#include <stdio.h>

/**
 * main - prints the sum of multiples.
 *
 * Return: 0 (Success)
 */
int main(void)
{

	int i;

	int n = 0;

	for (i = 1; i <= 1023; i = i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			n += i;
			printf("%d", n);
		}
	}
	printf("\n");

	return (0);
}
