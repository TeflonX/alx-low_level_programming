#include "main.h"
#include <string.h>
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	int i, j, len1 = len2 = 0;

	char *s;


	if (s1 != NULL)
		len1 = strlen(s1);
	
	if (s2 != NULL)
		len2 = strlen(s2);
	
	s = malloc((len1 + len2 + 1) * sizeof(char));

	
	if (s == NULL)
	{
		return (NULL);
	}
	
	for (i = 0; i <= len2; i++)
	{
		s1[len1 + i] = s1[i];
	}

	for (j = 0; j <= (len1 + len2 + 1); j++)
	{
		s[j] = s1[j];
	}
	return (s);
}
