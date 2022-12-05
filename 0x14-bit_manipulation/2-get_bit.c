#include "main.h"
#include "limits.h"
/**
 * get_bit - a function that returns the value of a bit at
 * a given index
 * Return: bit at that given index
 * @n: the number to be analyzed
 * @index: index of the bit (starting from zero)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i, mask;

	i = 0;
	mask = 1;
	while (i < index)
	{
		mask = mask * 2;
		i++;
	}

	if (n >= ULONG_MAX)
		return (-1);

	if (mask & n)
		return (1);
	else
		return (0);
}
