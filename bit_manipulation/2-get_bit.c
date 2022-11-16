#include "main.h"

/**
 * get_bit - returns bit at index 'index' of 'n',
 * where the index is counted from least significant
 * bit to most significant; if successful, otherwise:
 * -1.
 *
 * (starting from 0)
 *
 * @n: bits
 * @index: bit index in 'n', counting from
 * least significant to most significant
 *
 * Return: bit if successful, -1 if failed
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int max_bits = 63;

	if (index > 63)
		return (-1);

	return (n << (max_bits - index) >> max_bits);
}

