#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * Return: 0 and 1 (Success).
 * @c: integer
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


