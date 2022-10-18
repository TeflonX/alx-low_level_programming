#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 10; i <= 19; i++)
	{
		if (i / 10)
		{
			putchar(' ');
			putchar(i % 10 + '0');
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
