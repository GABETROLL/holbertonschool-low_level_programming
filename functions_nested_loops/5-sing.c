#include "main.h"

/**
 * print_sign - Prints sign of number.
 * @n: integer with sign to be checked.
 * Return: 1 if number > 0, 0 if n == 0, -1 i fnumber < 0.
 */
int print_sign(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

