#include <stddef.h>
#include "main.h"
#include <string.h>

/**
 * _strpbrk - a function that searches a string for any set of byte.
 * Return: a pointer to address of the first occurence of a character.
 * @s: pointer to a string.
 * @accept: pointer to another string.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, flag, len1, len2;

	len1 = strlen(s);
	len2 = strlen(accept);

	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				flag = 1;
				break;
			}
		}
		if (*(s + i) == *(accept + j))
		{
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
