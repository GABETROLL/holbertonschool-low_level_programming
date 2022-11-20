#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: %s filename text\n", av[0]);
		exit(1);
	}

	printf("%d\n", create_file("file0", "hello"));
	printf("%d\n", create_file("file1", "hello"));
	printf("%d\n", create_file("file2", "hi"));
	printf("%d\n", create_file("file3", "can't write this :("));
	printf("%d\n", create_file("file4", NULL));

	return (0);
}

