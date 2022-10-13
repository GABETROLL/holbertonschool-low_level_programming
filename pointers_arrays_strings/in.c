#include "main.h"

/**
 * in - Checks if a char is present in a string.
 * @c: char to be searched
 * @chars: pointer to string
 * Return: 1 if found, otherwise: 0
 */
int in(char c, char *chars)
{
	int index;

	for (index = 0; chars[index] != '\0'; index++)
	{
		if (chars[index] == c)
		{
			return (1);
		}
	}
	return (0);
}

