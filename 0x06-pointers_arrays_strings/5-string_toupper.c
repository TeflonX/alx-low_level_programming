#include "main.h"

/**
 * string_toupper - a function.
 * Return: char.
 * @str: pointer.
 * @' ' : pointer
 */

char *string_toupper(char *)
{
	int i;

	char str;

	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return(str)
}