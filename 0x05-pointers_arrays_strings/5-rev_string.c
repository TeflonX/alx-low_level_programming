#include "main.h"

/**
 * rev_string - print string in reverse.
 * _strlen - length of string.
 * Return: void
 * @s: char pointer.
 */

void rev_string(char *s)
{
	int i, j, n;

	char c;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	n = i;

	for (j = 0; j < n / 2; j++)
	{
		s[i] = c;
		s[i] = s[n - 1 - i];
		c = s[n - 1 - i];
	}
}
