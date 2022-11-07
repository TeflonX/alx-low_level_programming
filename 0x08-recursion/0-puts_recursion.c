#include "main.h"
/**
 * _puts_recursion - function that prints string recursively.
 * Return: void.
 * @s: pointer to string.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
