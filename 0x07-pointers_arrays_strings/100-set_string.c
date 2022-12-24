#include "main.h"
#include <string.h>
/**
 * set_string - set the value of a double pointer to a char
 * @s: double pointer to the address to be changed
 * @to: pointer to the new address
 *
 * Return: nothing
 */
void set_string(char **s, char *to)
{
		*(s) = to;
}
