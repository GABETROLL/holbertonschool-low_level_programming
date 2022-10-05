#include "main.h"

/**
 * print_sign - Prints sign of number n and returns int below.
 * @n: integer with sign to be checked.
 * Return: 1 if number > 0, 0 if n == 0, -1 i fnumber < 0.
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

