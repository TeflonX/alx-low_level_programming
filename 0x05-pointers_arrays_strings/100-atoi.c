#include "main.h"
#include <string.h>


int _atoi(char *s)
{
	int sign, result;

	unsigned int i;

	sign = 0;
	i = 0;

	if (s[i] == '-' || s[i] == '+')
	{
		sign = 1 - 2 * (s[i++] = '-');
		i++;
	}
	
	if (s[i] == ' ')
	{
		i++;
	}
	result = 0;
	while (strlen(s) > i && s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + s[i++] - '0';
	}

	if (!(s[i] >= '0' && s[i] <= '9'))
	{
		return (0);
	}

	return (sign * result);
	

	
}
