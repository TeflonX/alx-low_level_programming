#include "main.h"
#include <stddef.h>
#include <string.h>
/**
 * _strstr - finds the first occurence of a substring in a string
 * @haystack: pointer to the main string
 * @needle: pointer to the substring
 *
 * Return: a character pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, len1, len2;

	len1 = strlen(haystack);
	len2 = strlen(needle);

	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
			if (j == len2)
				break;
		}
		if (j == len2)
			break;
	}
	if (i == len1)
	{
		return (NULL);
	}
	else
	{
		return (&haystack[i]);
	}
}
