#include <stdio.h>

/**
 * main - Prints ALL arguments in the shell
 * INCLUDING the excecutable name
 * sometimes with './' before it,
 * all followed by a new line; then exits successfully.
 *
 * @argc: amount of arguments including executable
 * @argv: argument pointer array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}

	return (0);
}

