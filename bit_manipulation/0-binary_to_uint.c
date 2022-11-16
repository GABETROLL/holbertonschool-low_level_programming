#include "main.h"

/**
 * binary_to_uint - Returns unsigned integer that contains
 * the bits in 'b'
 *
 * if 'b' is NULL or 'b' contains a char that's not a bit,
 * return 0.
 *
 * @b: bits
 * Return: uint with the bits in 'b' if it's possible,
 * otherwise 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int index = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (; b[index]; index++)
	{
		if (b[index] != '0' && b[index] != '1')
		{
			return (0);
		}

		result <<= 1;
		result += b[index] - '0';
	}

	return (result);
}

