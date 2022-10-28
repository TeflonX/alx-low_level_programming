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
	int i, j, len1, len2;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	len1 = i;

	for (j = 0; src[j] != '\0'; j++)
	{
	}
	len2 = j;

	for (k = 0; k <= n; k++)
	{
		dest[len1 + n] = src[n];
	}

	dest[i] = '\0';

	return (dest);
}

