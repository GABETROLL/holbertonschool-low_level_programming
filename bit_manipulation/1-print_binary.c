#include "main.h"
#include <stdio.h>

/**
 * print_binary - Prints 'n' in binary.
 *
 * @n: numbre that will be printed in binary
 * by this function
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int veil = LLONG_MIN;
	char current_bit;
	/* last bit always gets printed */
	char max_bits = 63;
	char optional_bits = max_bits;

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

	/* slide to first 1 bit */
	for (; optional_bits; optional_bits--)
	{
		current_bit = ((n & veil) >> max_bits);
		if (current_bit)
			break;

		n <<= 1;
	}

	/* print bits (0 runs because last bit is mandatory) */
	for (; optional_bits >= 0; optional_bits--)
	{
		_putchar('0' + ((n & veil) >> max_bits));
		n <<= 1;
	}
}

