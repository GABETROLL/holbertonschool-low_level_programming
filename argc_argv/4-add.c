#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints any amount of  numbers in shell arguments,
 * then returns 0.
 * If there aren't exactly 2 arguments after the file name in the shell,
 * prints "Error\n" and exits with error code of 1.
 *
 * @argc: argument count
 * @argv: array of pointers to the strings of
 * 2 numbers to be added
 *
 * Return: 0 if there are 2 arguments, otherwise 1.
 */
int main(int argc, char *argv[])
{
	int sum;

	int num_index;

	sum = 0;

	for (num_index = 1; num_index < argc; num_index++)
	{
		int str_index;

		for (str_index = 0; argv[num_index][str_index]; str_index++)
		{
			if (argv[num_index][str_index] < '0' || argv[num_index][str_index] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num_index]);
	}

	printf("%d\n", sum);

	return (0);
}

