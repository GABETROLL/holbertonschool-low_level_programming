#include "main.h"

/**
 * clear_bit - Sets bit at index 'index' in '*n'
 * to 0 (counting indexes the same way as
 * exercices 2 and 3)
 *
 * If 'index' is invalid, return -1.
 *
 * @n: pointer to int that would have its
 * bit cleared by this function
 * @index: index of bit to clear in '*n'
 *
 * Return: 1 if successful, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	/*  1101100101
	 * &1111011111 <- index = 5
	 * -----------
	 *  1101000101
	 *
	 *  00010
	 * &10111 <- index = 3
	 * ------
	 *  00010
	 */

	/* casts automatically to ulong */
	*n &= ~(1 << index);
	return (1);
}

