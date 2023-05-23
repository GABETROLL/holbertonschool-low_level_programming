#include <stdio.h>

/**
 * main - Prints name of executable (sometimes with './' before it)
 * and exits the program with a success code.
 *
 * @argc: Shell argument count
 * @argv: Shell argument pointers
 * Return: 0
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}

