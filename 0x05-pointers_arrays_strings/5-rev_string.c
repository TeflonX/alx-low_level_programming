#include "main.h"

/**
 * rev_string - print string in reverse.
 * _strlen - length of string.
 * Return: void
 * @s: char pointer.
 */

void rev_string(char *s)
{
	int length, i;

	char temp, *start, *end;

	length = _strlen(s);
	start = s;
	end = s;
	for (i = 0; i < length - 1; i++)
	{
		end++;
	}
	for (i = 0; i < length / 2; i++)
	{
		temp   = *end;
		*end   = *start;
		*start = temp;

		start++;
		end--;
	}
}