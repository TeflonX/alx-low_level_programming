#include "main.h"
#include <string.h>

char *str_concat(char *s1, char *s2)
{
	int i, len1, len2;

	char *s;

	len1 = strlen(s1);
	len2 = strlen(s2);
	
	s = malloc((len1 + len2 + 1) * sizeof(char));

	for (i = 0; i <= len2; i++)
	{
		s1[len + i] = s2[i];
	}

	for (i = 0; i <= len1 + len2 + 1; i++)
	{
		s[i] = s1[i];
	}


}
