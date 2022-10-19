#include "main.h"

/**
 * _isdigit - determines if an int's char is an digit.
 * @c: input
 * Return: 1 if c's char is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

