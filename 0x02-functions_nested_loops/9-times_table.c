#include "main.h"
/**
 * times_table - a function that prints the nine times table.
 * Return: void (Success)
 */
void times_table(void)
{
	int i, j, o;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			o = i * j;
			if (j == 0)
				_putchar(o + '0');
			if ((j >= 1 && j <= 9) && o < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(o + '0');

			}
			if ((j >= 1 && j <= 9) && o >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((o / 10) + '0');
				_putchar((o % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
