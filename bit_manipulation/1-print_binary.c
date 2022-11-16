#include "main.h"

/**
 * Print_binary - Prints 'n' in binary.
 *
 * @n: numbre that will be printed in binary
 * by this function
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int veil = LLONG_MIN;
	/*
	 * veil = all zeros in the except for the largest bit
	 * (a 1 followed by 63 0's)
	 *
	 * 1101 & 1000 >> 0101 -> 0001
	 * 1010 & 1000 >> 0101 -> 0001
	 * 0100 & 1000 >> 0101 -> 0000
	 * 1000 & 0001 >> 0101 -> 0001
	 *
	 * (but with 64 bits)
	 *
	 * 00000101:
	 * 10100000 & 10000000 >> 00000111 -> 00000001
	 * 01000000 & 10000000 >> 00000111 -> 00000000
	 * 10000000 & 10000000 >> 00000111 -> 00000001
	 * (first slide n to start printing at the frst 1 bit)
	 */

	/* all 0's is just 0 */
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	/* slide to first 1 bit */
	while (!((n & veil) >> 63))
		n <<= 1;

	/* print bits */
	while (n)
	{
		_putchar('0' + ((n & veil) >> 63));
		n <<= 1;
	}
}

