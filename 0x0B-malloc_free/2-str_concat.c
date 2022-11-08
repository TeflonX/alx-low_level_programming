#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - copies two string into a memory location.
 * Return: char pointer to the location.
 * @s1: pointer to the first string.
 * @s2: pointer to the second string.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2;

	char *s;

	len1 = len2 = 0;

	if (s1 != NULL)
		len1 = strlen(s1);

	if (s2 != NULL)
		len2 = strlen(s2);

	s = malloc((len1 + len2 + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len1; i++)
	{
		s[i] = s1[i];
	}

	for (j = 0; j <= len2; j++)
	{
		s[len1 + j] = s2[j];
	}
	return (s);
}
