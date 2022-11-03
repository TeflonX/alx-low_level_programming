#include "main.h"

/**
 * puts_half - prints the second half of a string
 * Return: void.
 * @str: a char pointer.
 */

void puts_half(char *str)
{
	int i, j, k, n, length_of_the_string;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	length_of_the_string = i;


	n = (length_of_the_string - 1) / 2;

	if (length_of_the_string % 2 != 0)
	{
		for (j = n + 1; j <= length_of_the_string - 1; j++)
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
