#include  "main.h"
/**
 * print_number - a function that prints an integer
 * Return: void
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int i, count, reg, num, num1, num2;

	if (n == 0)
		_putchar(0 + '0');
	if (n < 0)
	{
		_putchar('-');
		num1 = n * (-1);
	}
	if (n > 0)
		num1 = n;

	num2 = num1;
	reg = 0;
	count = 1;
	while (num1 != 0)
	{
		num1 = num1 / 10;
		reg++;
	}

	for (i = 0; i < reg - 1; i++)
		count = count * 10;

	num1 = num2;
	num = 0;
	while (count != 0)
	{
		num =  num1 / count;
		_putchar(num + '0');
		num1 = num1 % count;
		count = count / 10;
	}
}
