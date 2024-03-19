#include "3-calc.h"
#include <stdio.h>
#include <string.h>

/**
 * get_op_func - selects the function to perform the operation
 * @s: pointer to the operation
 * Return: the right function to s or NULL
*/

int (*get_op_func(char *s))(int, int)
{

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
