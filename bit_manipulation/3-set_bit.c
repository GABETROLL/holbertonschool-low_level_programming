#include "main.h"

/**
 * set_bit - Sets bit at index 'index' in '*n'
 * to a 1 (counting indexes being the same as
 * exercise 2)
 *
 * @n: pointer to int to change int in
 * @index: index of bit to change in '*n'
 *
 * Return: 1 if index is valid, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n += 1 << index;
	return (1);
}

