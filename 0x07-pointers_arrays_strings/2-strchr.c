#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates a character in a string.
 * Return: a pointer to the char c;
 * @s: a pointer to a string.
 * @c: a character.
 */

char *_strchr(char *s, char c)
{
	int i, flag;

	flag = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		return (s + i);
	}
	else
	{
		return (NULL);
	}
}
