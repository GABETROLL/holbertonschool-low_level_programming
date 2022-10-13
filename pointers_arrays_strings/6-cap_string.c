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

/**
 * cap_string - Captializes string.
 * @str: String to be capitalized
 * Return: pointer to string
 */
char *cap_string(char *str)
{
	int index;
	char previous;

	char separators[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', ' ', '\t', '\n'};
	previous = '\0';

	for (index = 0; str[index] != '\0'; index++)
	{
		if ((in(previous, separators) || previous == '\0')
				&& (str[index] >= 'a' && str[index] <= 'z'))
		{
			str[index] -= 'a' - 'A';
		}

		previous = str[index];
	}

	return (str);
}

