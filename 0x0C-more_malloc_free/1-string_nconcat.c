#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings.
 * Return: a char pointer.
 * @s1: pointer to the first string.
 * @s2: pointer to the second string.
 * @n: number of character to be copied.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1, len2;

	char *p;

	len1 = 0;
	len2 = 0;
	if (s1 == NULL)
	{
		len1 = 0;
	}
	if (s2 == NULL)
	{
		len2 = 0;
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
	{
		n = len2;
	}

	p = malloc(sizeof(*p) * (len1 + n));
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		*(p + i) = *(s1 + i);
	}
	for (i = 0; i < n && *(s2 + i) != '\0'; i++)
	{
		*(p + (len1 + i)) = *(s2 + i);
	}
	*(p + (len1 + i)) = '\0';

	return (p);
}
