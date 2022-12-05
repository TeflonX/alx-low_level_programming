#include "main.h"
/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * Return: 1 or -1(for error)
 * @n: pointer to tne integer
 * @index: index of the number to be changed to 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i, num;

	num = 1;
	i = 0;
	while (i < index)
	{
		num = num * 2;
		i++;
	}

	*n = *n | num;

	return (1);
}
