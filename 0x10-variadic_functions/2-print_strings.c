#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char str;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char);
		printf("%s%c", str, *separator);
	}
	printf("\n");
	va_end(args);


}
