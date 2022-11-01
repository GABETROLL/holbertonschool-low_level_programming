#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - Gets shell inputs from user
 * and tries to interpret them as:
 * int operation int
 * and, print the result and exit with code 0.
 *
 * If the amount of inputs, operations or
 * ints are wrong, exit with error code 98.
 *
 * @argc: amount of shell args
 * @argv: array of arguments in shell
 *
 * Return: 98 if the amount of args or the args are not
 * a valid "int operation int" format, otherwise
 * 0
 */
int main(int argc, char **argv)
{
	int a, b;
	char *mod = "%";
	char *div = "/";
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error.\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error.\n");
		return (99);
	}

	if ((argv[2] == div || argv[2] == mod) && b == 0)
	{
		printf("Error.");
		return (100);
	}

	printf("%d\n", op_func(a, b));

	return (0);
}
