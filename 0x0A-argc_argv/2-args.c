#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that prints all argument received.
 * Return: 0 (Success)
 * @argc: argument count.
 * @argv: argument vector.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
