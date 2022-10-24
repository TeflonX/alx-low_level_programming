#include <stdio.h>

/**
 * main - prints fizz, buzz or fizzbuzz.
 * Return: 0 (Success)
 */

int main(void)
{
	int i;

	char c[] = "Fizz";

	char d[] = "Buzz";

	char e[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("%s", c);
		}
		else if (i % 5 == 0)
		{
			printf("%s", d);
		}
		else if (i % 15 == 0)
		{
			printf("%s", e);
		}
		else
		{
		printf("%d", i);
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
