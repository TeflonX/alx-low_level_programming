#include "3-calc.h"
#include <stdio.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0, 98, 99 or 100
 */
int main(int argc, char *argv[])
{
	int (*result)(int, int);

	int ret_val;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((strcmp(argv[2], "%") == 0 || strcmp(argv[2], "/") == 0)
	&& strcmp(argv[3], "0") == 0)
	{
		printf("Error\n");
		exit(100);
	}
	if (strcmp(argv[2], "+") == 0 || strcmp(argv[2], "-") == 0 ||
	strcmp(argv[2], "*") == 0 || strcmp(argv[2], "/") == 0 ||
	strcmp(argv[2], "%") == 0)
	{
		result = get_op_func(argv[2]);
		ret_val = result(atoi(argv[1]), atoi(argv[3]));
		printf("%d\n", ret_val);
	}
	else
	{
		printf("Error\n");
		exit(99);
	}

	return (0);
}
