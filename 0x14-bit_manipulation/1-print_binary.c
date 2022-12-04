#include "main.h"
/**
 * print_binary - a function that prints the binary representation of a number
 * Return: void.
 * @n: positive integer to be converted to binary
 */
void print_binary(unsigned long int n)
{
	int i, loop, loop1;

	unsigned long int mask, num, num2;

	num = 1;
	loop = 0;
	while (num < n)
	{
		num = num * 2;
		loop++;
	}

	if (num > n)
	{
		loop1 = loop;
		num2 = 1;
		for (i = 0; i < loop1 - 1; i++)
			num2 = num2 * 2;
		mask = num2;
	}
	if (num == n)
	{
		mask = num;
		loop++;
	}
	if (n == 0)
		_putchar('0');

	for (i = 0; i < loop; i++)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
		mask = mask >> 1;
	}
}
