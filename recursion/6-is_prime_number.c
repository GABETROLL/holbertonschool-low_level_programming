#include "main.h"

/**
 * find_factor - Returns the lowest factor of n from 'factor' to 'n'.
 *
 * @factor: starting guess.
 * will be called in recursion as factor + 1, until n;
 * since n % n is 0.
 *
 * @n: number to find factors of
 * Return: lowest factor of n from 'factor' to 'n'
 */
int find_factor(int factor, int n)
{
	if (n % factor == 0)
	{
		return (factor);
	}
	return (find_factor(factor + 1, n));
}

/**
 * is_prime_number - Checks if number is prime number
 * @n: Integer to be checked
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n < 2 || find_factor(2, n) < n)
	{
		return (0);
	}
	return (1);
}

