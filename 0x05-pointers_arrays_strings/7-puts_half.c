#include "main.h"

/**
 * puts_half - prints the second half of a string
 * Return: void.
 * @str: a char pointer.
 */

void puts_half(char *str)
{
	int i, j, k;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	int length_of_the_string = i;


	int n = (length_of_the_string - 1) / 2;

	if (length_of_the_string % 2 != 0)
	{
		for (j > n; j <= length_of_the_string - 1; j++)
		{
			_putchar(str[j]);
		}
		_putchar('\n');
	}
	else
	{
		for (k = length_of_the_string / 2; k <= length_of_the_string -
		1; k++)
		{
			_putchar(str[k]);
		}
		_putchar('\n');
	}


}