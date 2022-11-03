#include "main.h"
/**
 * _strncpy - a function that copies a string.
 * Return: char (Success)
 * @dest: pointer
 * @src: pointer
 * @n: integer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i <= n - 1 && src[i] != '\0'; n++)
	{
		dest[n] = src[n];
	}

	for (i = 0; i <= n - 1; i++)
	{
		dest[n] = '\0';
	}

	return (dest);
}
