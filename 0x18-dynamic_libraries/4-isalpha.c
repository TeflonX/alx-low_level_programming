#include "main.h"

/**
 * _isalpha - function that print the alphabet, lower and upper case.
 *
 * Return: 0 or 1 (Success)
 *
 * @c: an integer parameter
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

