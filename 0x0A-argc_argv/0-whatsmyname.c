#include <stdio.h>
/**
 * main - prints out the name of the program on the terminal.
 * Return: 0 (Success)
 * @argc: argument count
 * @argv: argument vector
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}

