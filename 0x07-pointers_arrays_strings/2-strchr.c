#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strchr - function that locates a character in a string.
 * Return: a pointer to the char c;
 * @s: a pointer to a string.
 * @c: a character.
 */

char *_strchr(char *s, char c)
{
	int i, j, flag;
	
	j = strlen(s);

	flag = 0;

	for (i = 0; i <= j; i++)
	{
		if (*(s + i) == c)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		return (NULL);
	}
	else
	{
		return (s + i);
	}
}
