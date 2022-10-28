#include <stdio.h>

/**
 * main - prints the sum of multiples.
 *
 * Return: 0 (Success)
 */
int main(void)
{

	int i;

	int t1 = 5;

	int nextTerm = t1 + 5;

	for (i = 1; i <= 203; i = i++)
	{
		printf("%d", nextTerm);
		t1 = nextTerm;
		nextTerm = t1 + 5;
	}
	printf("\n");

	return (0);
}
