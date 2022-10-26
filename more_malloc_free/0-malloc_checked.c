#include <stdlib.h>

/**
 * malloc_checked - Tries to allocate memory.
 *
 * If the allocation fails, exits program
 * with a 98 exit code.
 *
 * @b: amount of bytes to allocate.
 * Return: pointer to allocated bytes
 */
void *malloc_checked(unsigned int b)
{
	void *result = malloc(b);

	if (result == NULL)
	{
		exit(98);
	}

	return (result);
}

