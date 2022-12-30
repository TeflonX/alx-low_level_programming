#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * integer_check - checks if argument passed are digits
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1 or 0
 */
int integer_check(int argc, char *argv[])
{
	int i, count;

	count = 0;
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) > 0)
			count++;
	}
	if (count == 0)
	{
		printf("0\n");
		return (1);
	}

	return (0);
}
/**
 * add_numbers - add two numbers passed as argument
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: void
 */
void add_numbers(int argc, char *argv[])
{
	int i, result;

	result = (atoi(argv[1]));
	for (i = 2; i < argc; i++)
	{
		result = result + (atoi(argv[i]));
	}
	printf("%d\n", result);
}
/**
 * main - function that adds two numbers.
 * Return: 0 (Success)
 * @argc: argument count.
 * @argv: argument vector.
 */
int main(int argc, char *argv[])
{
	int i, j, count, breaker2;

	size_t breaker1;

	count = integer_check(argc, argv);
	if (count == 1)
		return (0);

	i = 1;
	breaker2 = 0;
	while (i < argc)
	{
		breaker1 = 0;
		if (atoi(argv[i]) > 0)
		{
			j = 0;
			while (argv[i][j])
			{
				if (argv[i][j] >= '0' && argv[i][j] <= '9')
				{
					breaker1++;
				}
				j++;
			}
		}
		if (breaker1 < strlen(argv[i]))
		{
			breaker2 = 1;
			break;
		}
		i++;
	}
	if (breaker2 == 1)
	{
		printf("Error\n");
		return (1);
	}
	add_numbers(argc, argv);

	return (0);
}
