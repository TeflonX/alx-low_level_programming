#include <stdio.h>

int main(void)
{
	int i;

	int t1 = 1,t2 = 2;

	unsigned long long int nextTerm = t1 + t2;

	for (i = 3; i <= 50; ++i)
	{
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
		if (nextTerm > 4000000)
			break;
		if (nextTerm % 2 == 0)
			printf("%d, ", nextTerm);	
	}
	printf("\n");

	return (0);
}

