#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * binary_to_uint - a function that converts a binary number
 * to an unsigned int
 * Return: sum (the decimal value of the binary number)
 * @b: a string of binary numbers
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, weight, value;

	int len, i;

	if (!b)
		return (0);

	len = strlen(b);

	value = 0;
	sum = 0;
	weight = 1;
	for (i = len - 1; i >= 0; i--)
	{
		if ((b[i] - '0') == 0 || (b[i] - '0') == 1)
		{
			sum = sum + ((b[i] - '0') * weight);
			weight = weight * 2;
		}
		else
		{
			value = 1;
		}
	}
	if (value == 1)
		return (0);

	return (sum);
}
