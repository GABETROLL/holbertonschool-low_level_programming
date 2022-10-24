#include <stdlib.h>

/**
 * create_array - allocates array that contains only 'c' chars in memory.
 * @size: size of the array this function will allocate
 * @c: char this function will fill the array by the function with.
 * Return: pointer to array this function created
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(sizeof(c) * size);
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}

	return (p);
}

