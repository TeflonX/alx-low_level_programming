#include "main.h"
#include <string.h>


int _atoi(char *s)
{
	int sign, result;

	if (!s)
		return (0);
/*	while (
	sign = 0;
	i = 0;
	result = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ' ')
		{
			i++;
	}
		if (s[i] >= '0' && s[i] <= '9')
			result = result * 10 + s[i] - '0';
		i++;
	}

	return (sign * result);

	int _atoi(char *s) {
*/	sign = 1;
	result = 0;

	while (*s == ' ' || *s == '\t' || *s == '\n' || *s == '\r' ||
		(*s >= 'a' && *s <= 'z')|| *s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}

	while ((*s >= '0' && *s <= '9') && (*(s + 1) >= '0' && *(s + 1) <= '9')) 
	{
		result = result * 10 + (*s - '0');
		s++;
	}
	return (sign * result);
}
