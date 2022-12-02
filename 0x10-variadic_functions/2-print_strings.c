#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int c;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		c = va_arg(args, const unsigned int);
		printf("%c%c", c, *separator);
	}
	printf("\n");
	va_end(args);


}
