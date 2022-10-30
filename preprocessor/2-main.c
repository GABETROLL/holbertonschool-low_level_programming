#include <stdio.h>

/**
 * main - Prints the file it was compiled from,
 * then exits successfully.
 *
 * Return: 0
 */
int main(void)
{
	printf(__FILE__);
	putchar('\n');

	return (0);
}

