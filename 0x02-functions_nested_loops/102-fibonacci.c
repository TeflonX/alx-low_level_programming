#include <stdio.h>
/**
 * main - a program that prints the first 50 Fibonacci numbers, starting
 * with 1 and 2.
 * Return: 0 (Success)
 */
int main(void)
{
	unsigned long int i, t1, t2, nextTerm;

	t1 = 1;
	t2 = 2;
	nextTerm = t1 + t2;
	printf("%lu, %lu, %lu, ", t1, t2, nextTerm);

	for (i = 1; i <= 47; ++i)
	{
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;

		if ((nextTerm >= 1) && (nextTerm <= 2147483647))
		{
			printf("%lu", nextTerm);
		}
		if (nextTerm > 2147483647)
		{
			printf("%lu", (nextTerm / 10));
			printf("%lu", (nextTerm % 10));
		}
		if (i != 47)
			printf(", ");
	}
	printf("\n");

	return (0);
}

