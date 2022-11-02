#include "main.h"

/**
 * rev_string - print string in reverse.
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
		c = s[j];
		s[j] = s[n - 1 - j];
		s[n - 1 - j] = c;
	}
}

