#include <stdio.h>

/**
 * main - Prints the amount of arguments put into the program,
 * then exits successfully.
 * (!!DOESN'T COUNT THE PROGRAM NAME AS AN ARGUMENT!!)
 *
 * @argc: Argument count
 * @argv: Array of pointers to string arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (*argv[0])
	{
		/*
		 * This if exists only because
		 * Holberton's compiler wants all variables to be used.
		 */
		printf("%d\n", argc - 1);
	}
	return (0);
}

