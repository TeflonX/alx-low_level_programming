#include "main.h"
/**
 * factorial - calculates factorial recursively.
 * Return: int value of factorial.
 * @n: int argument.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
