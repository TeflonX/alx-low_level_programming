#include "main.h"
#include <stddef.h>
#include <string.h>

char *_strstr(char *haystack, char *needle)
{
	int i, j, n, flag, len1, len2;

	len1 = strlen(haystack);
	len2 = strlen(needle);
	flag = 0;
	n = len1 - len2 + 1;

	for (i = 0; i < n; i++)
	{
		flag = 0;
		for (j = 0; j < len2; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				flag = 1;
				break;
			}
		}
		if (haystack[i + j] != needle[j])
		{
			break;
		}
	}
	if (flag == 1)
	{
		return (haystack[i + j]);
	}
	else
	{
		return (NULL);
	}
}
