#include "main.h"

char *rot13(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		while 
		((s[i] >= 'a' && s[i] <= 'z') ||
		(s[i] >= 'A' && s[i] <= 'Z'))
		{
			if
			((s[i] >= 'a' && s[i] <= 'm') ||
			(s[i] >= 'A' && s[i] <= 'M'))
				s[i] = s[i] + 13;
			else
				s[i] = s[i] - 13;
			i++;
		}
		i++;
	}
	
	return (s);

}
