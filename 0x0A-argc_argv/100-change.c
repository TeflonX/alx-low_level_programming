#include <stdio.h>
#include <stdlib.h>
/**
 * check_change - calculates the number of notes to be given as change
 * @number: amount to be worked on
 *
 * Return: nothing;
 */
void check_change(int number)
{
	int m, m1, m2, m3, m4, m5;

	m1 = m2 = m3 = m4 = m5 = 0;
	if (number >= 25)
	{
		m1 = number / 25;
		number = number % 25;
	}
	if (number >= 10)
	{
		m2 = number / 10;
		number = number % 10;
	}
	if (number >= 5)
	{
		m3 = number / 5;
		number = number % 5;
	}
	if (number >= 2)
	{
		m4 = number / 2;
		number = number % 2;
	}
	if (number >= 1)
	{
		m5 = number / 1;
		number = number % 1;
	}
	m = m1 + m2 + m3 + m4 + m5;
	printf("%d\n", m);
}

/**
 * main - a program that prints the minimum number of coins to make change for
 * an amount of money
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int number;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	number = atoi(argv[1]);
	if (number < 0)
	{
		printf("0\n");
		return (0);
	}

	check_change(number);

	return (0);
}
