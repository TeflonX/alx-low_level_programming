#include "main.h"
/**
 * print_times_table -  a function that prints the n times table,
 * starting with 0.
 * Return: void (Success).
 * @n: integer argument.
 */

void print_times_table(int n)
{
	int i, j, o;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				o = i * j;
				if (j == 0)
					_putchar(o + '0');
				if ((j >= 1 && j <= n) && o < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(o + '0');
				}
				if ((j >= 1 && j <= n) && (o >= 10 && o <=
							99))
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((o / 10) + '0');
					_putchar((o % 10) + '0');
				}
				if ((j >= 1 && j <= n) && o >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((o / 100) + '0');
					_putchar(((o / 10) % 10) + '0');
					_putchar((o % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
