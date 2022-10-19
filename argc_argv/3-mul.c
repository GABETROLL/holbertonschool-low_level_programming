#include <stdio.h>

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
		int index;

		a = 0;

		for (index = 0; argv[1][index]; index++)
		{
			a *= 10;
			a += argv[1][index] - '0';
		}
		/* build nums up, digit by digit, from most significant to least significant. */
		b = 0;
		
		for (index = 0; argv[2][index]; index++)
		{
			b *= 10;
			b += argv[2][index] - '0';
		}

		printf("%d\n", a * b);

		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

