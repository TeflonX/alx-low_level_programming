#include "main.h"

/**
 * _islower - function that checks for lower character
 *
 * Return: 1 if true and 0 if false.
 *
 * @c: accepts an integer.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
