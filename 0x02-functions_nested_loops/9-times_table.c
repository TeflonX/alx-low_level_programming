#include "main.h"
#include <stdio.h>

void times_table(void)
{
	int i, j, o;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			o = i * j;
			_putchar(o);
			
			if (j != 57)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
