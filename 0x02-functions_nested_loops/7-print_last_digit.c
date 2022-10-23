#include "main.h"

/**
 * print_last_digit - prints the last digit ofa number
 *
 * Return: the last digit.
 * @n: integer parameter.
 */

int print_last_digit(int n)
{
	int lastdig;

	lastdig = n % 10;
	if (lastdig < 0)
	{
		lastdig = lastdig * -1;
	}
	_putchar(lastdig + '0');
	return (lastdig);
}
