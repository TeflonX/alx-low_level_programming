#include "main.h"



void print_rev(char *s)
{
	int i;

	for (s[i] != '\0'; i = 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
