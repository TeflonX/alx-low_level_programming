#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that adds two numbers.
 * Return: 0 (Success)
 * @argc: argument count.
 * @argv: argument vector.
 */

int main(int argc, char *argv[])
{
	int i, result;

	if (argc == 1)
	{
		printf("0\n");
	}


	result = (atoi(argv[1]));

	for (i = 2; i < argc; i++)
	{
		result = result + (atoi(argv[i]));
	}
	printf("%d\n", result);

	return (0);
}
