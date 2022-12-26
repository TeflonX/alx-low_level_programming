#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - function that adds two numbers.
 * Return: 0 (Success)
 * @argc: argument count.
 * @argv: argument vector.
 */
int main(int argc, char *argv[])
{
	int i, j, k, l, count, breaker2, result;

	size_t breaker1;

	char *p;

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
	j = 1;
	k = 0;
	breaker1 = 0;
	breaker2 = 0;
	while (j < argc)
	{
		p = argv[j];
		if (atoi(argv[j]) > 0)
		{
			while (p[k])
			{
				if (p[k] >= '0' && p[k] <= '9')
				{
					breaker1++;
				}
				k++;
			}
		}
		if (breaker1 < strlen(argv[j]))
		{
			breaker2 = 1;
			break;
		}
		j++;
	}
	if (breaker2 == 1)
	{
		printf("Error\n");
		return (1);
	}
	result = (atoi(argv[1]));
	for (l = 2; l < argc; l++)
	{
		result = result + (atoi(argv[l]));
	}
	printf("%d\n", result);
	return (0);
}
