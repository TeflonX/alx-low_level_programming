#include "main.h"


char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	

	for (j = 0; j <= n; j++)
	{
		dest[j] = src[j];
	}
	
	dest[i] = '\0';

	return (dest);
}

