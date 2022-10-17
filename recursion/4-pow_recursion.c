#include "main.h"

/**
 * _pow_recursion - Calculates x ** y.
 * @x: base
 * @y: exponent
 * Return: x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y < 0)
	{
<<<<<<< HEAD
		return (1 / x * _pow_recursion(x, y + 1));
=======
		return (-1);
>>>>>>> 54a25f707292011a08ee0ddc4bb28842fb0278ad
	}
	return (1);
}

