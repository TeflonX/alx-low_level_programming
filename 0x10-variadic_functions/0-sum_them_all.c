#include <stdarg.h>
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * Return: sum of all the numbers.
 * @n: number of variables.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;

	va_list args;

	sum = 0;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			sum = sum + va_arg(args, const unsigned int);
		}
		va_end(args);
	}

	return (sum);
}
