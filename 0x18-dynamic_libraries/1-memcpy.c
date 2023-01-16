#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * Return: a char pointer.
 * @dest: a pointer to destination string.
 * @src: a pointer to the source string.
 * @n: number of bytes to copy.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
