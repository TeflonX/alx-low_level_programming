#include "main.h"

/**
 * print_alphabet - block of code that print small letters
 *
 * Return: nothing (Success)
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
