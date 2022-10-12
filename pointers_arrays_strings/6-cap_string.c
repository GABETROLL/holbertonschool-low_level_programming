#include "main.h"

/**
 * cap_string - Captializes string.
 * @str: String to be capitalized
 * Return: pointer to string
 */
char *cap_string(char *str)
{
	int index;
	char previous;

	previous = '\0';

	for (index = 0; str[index] != '\0'; index++)
	{
		if (!(previous >= 'a' && previous <= 'z')
				&& !(previous >= 'A' && previous <= 'Z')
				&& (str[index] >= 'a' && str[index] <= 'z'))
		{
			str[index] -= 'a' - 'A';
		}

		previous = str[index];
	}

	return (str);
}

