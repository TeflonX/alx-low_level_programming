#include "main.h"
/**
 * _strcmp - compares two strings.
 * Return: 0, 1 or -1.
 * @s1: pointer to a string.
 * @s2: pointer to string.
 */

int _strcmp(char *s1, char *s2)
{
	int i, flag;

	flag = 0;
	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			flag = 1;
			break;
		}
	}

	if (flag == 0)
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}
