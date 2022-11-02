#include <stddef.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - Returns pointer to function
 * that corresponds to the 's' operator,
 * found in 3-op_functions.c
 *
 * Operators are: +, -, *, slash and %.
 * If operator doesn't match with the
 * above ones, return NULL.
 *
 * @s: operator string
 *
 * Return: operation function
 * from 3-op_functions.c
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
	int i;

	i = 0;

	while (ops[i].op)
	{
		if (!strcmp(ops[i].op, s))
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}

