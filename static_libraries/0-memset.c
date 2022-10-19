#include "main.h"

/**
 * _memset - Replaces first n chars starting from s with b.
 * @s: pointer to string
 * @b: char
 * @n: unsigned int
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}

	return (s);
}

