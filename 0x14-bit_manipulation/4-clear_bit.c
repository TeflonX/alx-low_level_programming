#include "main.h"
/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 * Return: 1(Success) or -1(Error)
 * @n: integer to be analyzed
 * @index: index of the number to be set to 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i, num;

	num = 1;
	i = 0;
	while (i < index)
	{
		num = num * 2;
		i++;
	}

	if (*n & num)
		*n = *n ^ num;

	if (index > 30)
		return (-1);

	return (1);
}
