#include "main.h"

/**
 * _memset - a function that fills memory with a costant byte.
 * Return: a character pointer.
 * @s: a char pointer.
 * @b: value to be replaced in a memory location.
 * @n: number of space pointed to by the pointer.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
