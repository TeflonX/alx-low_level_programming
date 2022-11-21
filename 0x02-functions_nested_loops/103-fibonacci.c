#include <stdio.h>
/**
 * main - function that prints sum of even valued term of fibonacci sequence.
 * Return: 0 (Success)
 */

int main(void)
{
	int i, n, t1, t2, nextTerm, sum;

	t1 = 1;
	t2 = 2;
	nextTerm = t1 + t2;
	sum = 0;

	for (i = 3; i <= 50; ++i)
	{
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;

		if ((nextTerm >= 1) && (nextTerm <= 4000000))
		{
			if (nextTerm % 2 == 0)
			{
				sum = sum + nextTerm;
			}
		}
	}

	n = sum + 2;
	printf("%d\n", n);

	return (0);
}

