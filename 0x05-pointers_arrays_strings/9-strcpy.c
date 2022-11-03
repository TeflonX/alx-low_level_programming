#include "main.h"
/**
 * _strcpy - copies a string into another string.
 * Return: dest
 * @dest: char pointer
 * @src: char pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i, j, k, n1, n2;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	n1 = i;

	for (j = 0; src[j] != '\0'; j++)
	{
	}
	n2 = j;

	for (k = 0; k <= n2; k++)
	{
		dest[n1 + k] = src[k];
	}

	return (dest);
}
