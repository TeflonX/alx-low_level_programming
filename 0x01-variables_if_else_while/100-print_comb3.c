#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 56; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (i == j)
			{
				continue;
			}
			putchar(i);
			putchar(j);
			if (i != 56 ||  j != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

