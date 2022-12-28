#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * string_len_sum - calculates total length of string
 * @ac: argument count
 * @av: argument vector
 *
 * Return: total length of string
 */
int string_len_sum(int ac, char **av)
{
	int sum, str_len, i;

	sum = 0;
	for (i = 0; i < ac; i++)
	{
		str_len = strlen(av[i]);
		sum = sum + str_len;
	}

	return (sum);
}

/**
 * argstostr - a function that concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: a char pointer to the concatenated string
 */
char *argstostr(int ac, char **av)
{
	int k, sum;

	size_t l, j, char_pos;

	char *p;

	if (ac == 0 || !av)
		return (NULL);

	sum = string_len_sum(ac, av);

	p = malloc(sizeof(char) * (sum + ac + 1));
	if (!p)
		return (NULL);

	for (j = 0; j < strlen(av[0]); j++)
		p[j] = av[0][j];
	p[strlen(av[0])] = '\n';

	char_pos = 0;
	k = 1;
	while (k < ac)
	{
		char_pos = char_pos + strlen(av[k - 1]);
		l = 0;
		while (l < strlen(av[k]))
		{
			p[char_pos + k + l] =
			av[k][l];
			l++;
		}
		if (char_pos > strlen(av[0]))
			p[char_pos + k - 1] = '\n';
		k++;
	}
	p[sum + ac - 1] = '\n';
	p[sum + ac] = '\0';

	return (p);
}
