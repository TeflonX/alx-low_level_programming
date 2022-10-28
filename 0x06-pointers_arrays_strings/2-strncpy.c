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
	for (n = 0; src[n] != '\0'; n++)
	{
		dest[n] = src[n];
	}
	dest[n] = '\0';

	return (dest);
}
