#include "main.h"
#include <stdio.h>

void print_times_table(int n)
{
	int i, j, o;

	for (i = '0'; i <= n; i++)
	{
		for (j = '0'; j <= n; j++)
		{
			o = i * j;
			_putchar(o);
			
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
