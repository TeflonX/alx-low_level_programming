#include "main.h"

/**
 * print_diagonal - prints diagonal lines.
 * Return: void.
 * @n: integer
 */

void print_diagonal(int n)
{
	int i;

	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (i == j)
				{
					_putchar('\\');
				}
				else if (i < j)
				{
					continue;
				}
				else
				{
					_putchar(' ');
				}
			}
		_putchar('\n');
		}
	}
}
