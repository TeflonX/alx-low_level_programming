#include "main.h"
/**
 * _strcpy - copies a string into another string.
 * Return: dest
 * @dest: char pointer
 * @src: char pointer
 */

char *_strcpy(char *dest, char *src)
{
	int j, k, n2;

	for (j = 0; src[j] != '\0'; j++)
	{
	}
	n2 = j;

	for (k = 0; k <= n2 - 1; k++)
	{
		dest[k] = src[k];
	}
	dest[k] = '\0';

	return (dest);
}
