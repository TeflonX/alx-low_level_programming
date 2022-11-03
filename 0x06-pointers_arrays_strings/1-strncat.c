#include "main.h"
/**
 * _strncat - function that concatenates string.
 * Return: char.
 * @dest: pointer.
 * @src: pointer.
 * @n: integer.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, len1;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	len1 = i;

	for (j = 0; j <= n - 1; j++)
	{
		dest[len1 + j] = src[j];
	}

	return (dest);
}
