#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: string pointer
 * Return: int
 */
int _strlen(char *s)
{
	int size = 0;

	while (*(s + size) != '\0')
	{
		size++;
	}

	return (size);
}

