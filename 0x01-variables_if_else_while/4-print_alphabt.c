#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e')
		{
			continue;
		}
		if (i == 'q')
		{
			continue;
		}
	putchar(i);
	}
	putchar('\n');
	return (0);
}
