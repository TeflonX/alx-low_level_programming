#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints two inputs from the command line.
 * Return: 0 (Success)
 * @argv: argument vector.
 * @argc: argument count.
 */

int main(int argc, char *argv[])
{
	int result;

	(void)argv;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	result = (atoi(argv[1])) * (atoi(argv[2]));
	printf("%d\n", result);


	return (0);
}
