#include "main.h"

/**
 * flip_bits - Returns the number of bits you need to
 * flip in 'n' to get 'm'.
 *
 * @n: bits
 * @m: bits
 *
 * Return: number of bits you need to flip in 'n'
 * to get 'm'.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int veil = 1;
	unsigned int flips = 0;
	unsigned int flip_attempts = 0;
	unsigned int max_bits = 64;

	for (; flip_attempts < max_bits; flip_attempts++)
	{
		/* check only the bit in the 1's place */
		if ((n & veil) != (m & veil))
			flips++;

		/* slide next bit into 1's place */
		n >>= 1;
		m >>= 1;
	}

	return (flips);
}

