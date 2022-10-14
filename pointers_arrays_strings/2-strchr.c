#include "main.h"

/**
 * _strchr - Finds c in string pointed to by s.
 * @s: string to search for c in
 * @c: char
 * Return: pointer to c if c was found, otherwise 0.
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == c)
		{
			return (s + index);
		}
	}

	return (0);
}

