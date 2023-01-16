#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring.
 * Return: flag, am unsigned int variable.
 * @s: pointer to a string to be compared.
 * @accept: pointer to the string to be checked for.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len1, len2, flag;

	len1 = strlen(s);
	len2 = strlen(accept);

	flag = 0;
	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				flag++;
				break;
			}
		}
		if (*(s + i) != *(accept + j))
		{
			break;
		}
	}

	return (flag);
}
