#include "main.h"

/**
 * _isalpha - Read return.
 * @c: ASCII code
 * Return: Returns 1 if c is a letter, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}

	return (0);
}

