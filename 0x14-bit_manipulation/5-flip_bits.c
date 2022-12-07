#include "main.h"
/**
 * flip_bits - a function that returns the number of bits you would need to
 * flip to get from one number to another
 * Return:number of bits to be flipped
 * @n: first number
 * @m: second number to be compared
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count, num;

	num = n ^ m;
	count = 0;
	while (num > 0)
	{
		num = num & (num - 1);
		count++;
	}

	return (count);
}
