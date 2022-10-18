#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Sucess)
 */
int main(void)
{
	char i;

	char j;

	for (i = 'a', i <= 'z'; j = 'A', j <= 'Z'; i++, j++)
	{
		putchar(i);
		putchar(j);
	}
	putchar('\n');
	return (0);
}

