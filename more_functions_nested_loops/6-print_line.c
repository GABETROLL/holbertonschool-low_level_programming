#include "main.h"

/**
 * print_line - Prints '_' for n amount of times.
 * @n: number of underscores. if n <= 0, jsut print '\n'.
 * Return: void
 */
void print_line(int n)
{
	int amount;

	for (amount = 0; amount < n; n++)
	{
		_putchar('_');
	}
}
