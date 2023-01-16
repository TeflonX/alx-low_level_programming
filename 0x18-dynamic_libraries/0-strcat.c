#include "main.h"

/**
 * *_strcat - function that concatenate strings.
 * Return: dest (A pointer)
 * @dest: a pointer.
 * @src: a pointer.
 */

char *_strcat(char *dest, char *src)
{
	int i, j, k, len1, len2;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	len1 = i;

	for (j = 0; src[j] != '\0'; j++)
	{
	}
	len2 = j;

	for (k = 0; k <= len2; k++)
	{
		dest[len1 + k] = src[k];
	}

	return (dest);
}
