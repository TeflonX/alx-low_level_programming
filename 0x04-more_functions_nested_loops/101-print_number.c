#include "main.h"
/**
 * print_number - a function that prints an integer
 * Return: void
 * @n: integer to be printed
 */
void print_number(int n)
{
	int count, i, num;

	if (n == 0)
		_putchar(0 + '0');
	if (n < 0)
	{
		_putchar('-');
		n = n * (-1);
	}
	i = n;
	count = 1;
	while (i != 0)
	{
		i = i / 10;
		count = count * 10;
	}

	count = count / 10;
	num = 0;
	while (count != 0)
	{
		num =  n / count;
		_putchar(num + '0');
		n = n % count;
		count = count / 10;
	}
}
