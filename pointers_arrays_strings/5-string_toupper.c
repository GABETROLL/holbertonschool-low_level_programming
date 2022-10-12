#include "main.h"

/**
 * string_toupper - Makes all letters uppercase.
 * @str: string to be modified
 * Return: pointer to str
 */
char *string_toupper(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] -= ('a' - 'A');
		}
	}

	return (str);
}

