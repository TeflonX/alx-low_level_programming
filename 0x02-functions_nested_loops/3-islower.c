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
	for (c = 97; c <= 122; c++)
	{
		return (1);
	}
	for (c = 122; c <= 255; c++)
	{
		return (0);
	}
	for (c = 0; c < 97; c++)
	{
		return (0);
	}
}
