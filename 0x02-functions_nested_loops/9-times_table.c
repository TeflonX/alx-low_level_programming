#include "main.h"
#include <stdio.h>

void times_table(void)
{
	int i, j, o;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			o = (i - '0') * (j - '0');
			_putchar(o + '0');
			
			if (j != '9')
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
