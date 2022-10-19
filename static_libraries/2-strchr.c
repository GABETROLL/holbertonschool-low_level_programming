#include "main.h"

/**
 * _strchr - Finds c in string pointed to by s.
 * @s: string to search for c in
 * @c: char
 * Return: pointer to c inside *s if c was found, otherwise 0.
 */
char *_strchr(char *s, char c)
{
	int index = 0;

	while (1)
	{
		if (s[index] == c)
		{
			return (s + index);
		}

		if (s[index] == '\0')
		{
			return (0);
		}

		index++;
	}
}

