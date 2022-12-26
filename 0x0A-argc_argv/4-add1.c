#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int check_for_char(char *p)
{
	size_t i, breaker1;

	breaker1 = 0;
	while (p[i])
	{
		if (p[i] >= '0' && p[i] <= '9')
		{
			breaker1++;
		}
		i++;
	}
	if (breaker1 < strlen(p))
	{
		printf("Error\n");
		return (1);
	}
	else
		return (0);
}

/**
 * main - function that adds two numbers.
 * Return: 0 (Success)
 * @argc: argument count.
 * @argv: argument vector.
 */
int main(int argc, char *argv[])
{
	int i, j, k, n, count, result, return_value;

	count = 0;
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) > 0)
		{
			count++;
		}
	}
	if (count == 0)
	{
		printf("0\n");
		return (0);
	}
	
	n = 0;
	return_value = 0;
	for (j = 1; j < argc; j++)
	{
		n = check_for_char(argv[j]);
		if (n == 1)
		{
			return_value = 1;
			break;
		}
	}
	if (return_value == 1)
		return (1);

	result = (atoi(argv[1]));
	for (k = 2; k < argc; k++)
	{
		result = result + (atoi(argv[k]));
	}
	printf("%d\n", result);

	return (0);
}
