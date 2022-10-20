#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 *
 */
int main(void)
{
	int i;

	int j;

	int k;

	for (i = 48; i <= 55; i++)
	{
		for (j = 48; j <= 56; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				if (i >= j || i >= k || j >= k)
				{
					continue;
				}
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != 55 || j != 56 || k != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
