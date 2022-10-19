#include <stdio.h>

/**
 * main - Prints name of executable (sometimes with './' before it)
 * and exits the program with a success code.
 *
 * @argc: Shell argument count
 * @argv: Shell argument pointers
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc)
	{
		/*
		 * This if exists only because
		 * Holberton's compiler wants all variables to be used.
		 */
		printf("%s\n", argv[0]);
	}

	return (0);
}

