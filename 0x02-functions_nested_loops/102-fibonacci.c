#include <stdio.h>

int main(void)
{
	int i, n;

	int t1 = 1,t2 = 2;

	unsigned long long int nextTerm = t1 + t2;

	for (i = 5; i <= 50; ++i)
	{
		if (i == 50)
		{
			printf("%llu", nextTerm);
		}
		else
		{
			printf("%llu, ", nextTerm);
		}
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	printf("\n");

	return (0);
}

