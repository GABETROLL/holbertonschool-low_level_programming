#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the product of 2 numbers
 * inputted in the shell arguments.
 *
 * @argc: argument count
 * @argv: argument pointer array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int a;
		int b;

		a = atoi(argv[1]);
		b = atoi(argv[2]);

		printf("%d\n", a * b);

		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

