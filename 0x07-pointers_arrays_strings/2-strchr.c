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
	size_t i, flag;

	flag = 0;

	for (i = 0; i <= strlen(s); i++)
	{
		if (s[i] == c)
		{
			flag++;
			break;
		}
	}
	if (flag == 0)
	{
		return (NULL);
	}
	else
	{
		return (&s[i]);
	}
}
