#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: string pointer
 * Return: int
 */
int _strlen(char *s)
{
	int size;
	char *current;

	current = s;

	while (*current != '\0')
	{
		size++;
		current++;
	}

	return size;
}

