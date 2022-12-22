#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer to be printed
 *
 * Return: nothing
 */
void print_number(int n)
{
	int i, divisor, count, number;

	unsigned int num1, num2;

	if (n >= 0)
		num1 = n;
	if (n < 0)
	{
		_putchar('-');
		num1 = n * (-1);
	}
	num2 = num1;

	count = 0;
	while (num1 != 0)
	{
		num1 = num1 / 10;
		count++;
	}

	divisor = 1;
	for (i = 0; i < count - 1; i++)
		divisor = divisor * 10;

	num1 = num2;
	while (divisor != 0)
	{
		number = num1 / divisor;
		_putchar(number + '0');
		num1 = num1 % divisor;
		divisor = divisor / 10;
	}
}
