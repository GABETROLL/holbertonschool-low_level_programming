#include "main.h"

/**
 * _isupper - determines if an int's char is an uppercase letter.
 * @c: input
 * Return: 1 if c's char is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
