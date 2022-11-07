#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function that copies a string and returns a pointer to the new
 * new string.
 * Return: a char pointer to the duplicate string.
 * @str: string to be duplicated.
 */

char *_strdup(char *str)
{
	char *s;

	int len1, len2, i;

	len1 = strlen(str);
	s = malloc((len1 + 1) * sizeof(char));
	len2 = strlen(s);

	if (str == NULL || len2 < len1)
	{
		return (NULL);
	}
	for (i = 0; i <= len1; i++)
	{
		*(s + i) = *(str + i);
	}
	return (s);
}
