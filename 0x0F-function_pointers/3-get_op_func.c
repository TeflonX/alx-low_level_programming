#include "3-calc.h"
/**
 * get_op_func -  function that selects the correct function to perform
 * the operation asked by the user
 *
 * @s: pointer to the operator
 *
 * Return: function pointer
 */
int (*get_op_func(char *s))(int, int)
{
	 int i;

	 op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	if (!s)
		return (NULL);

	i = 0;
	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			break;
		i++;
	}

	return (ops[i].f);
}
