#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: represents comma between numbers.
 * @n: number of variables.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;

	va_list args;

	va_start(args, n);
	num = 0;

	if (separator == NULL)
	{
	}
		for (i = 0; i < n; i++)
		{
			num = va_arg(args, int);
			if (i == n - 1)
				printf("%d", num);
			else
				printf("%d%c ", num, *separator);
		}
		printf("\n");
		va_end(args);

}
