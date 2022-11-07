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

	int len1, i;

	len1 = strlen(str);
	s = malloc((len1) * sizeof(char));

	if (str == NULL || s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len1; i++)
	{
		*(s + i) = *(str + i);
	}
	return (s);
}
