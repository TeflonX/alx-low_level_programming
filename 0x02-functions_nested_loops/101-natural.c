#include <stdio.h>

/**
 *  main - prints the sum of multiples.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int a;

	int ans;

	int sum;

	int m;

	a = 15;
	m = 1023 / a;
	sum = (m * (m + 1)) / 2;
	ans = a * sum;
	printf("sum of multiples of %d: %d", a, ans);
	printf("\n");

	return (0);
}
