#include "main.h"

/**
 * print_diagonal - Prints '\' n times diagonaly.
 * @n: number of times to print '\'
 * Return: void
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		int space;

		for (space = 0; space < i; space++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}

