#include <stdlib.h>

/**
 * _strdup - Returns pointer to copy of string
 * @str: pointer to previous string
 * Return: pointer to copy of string
 */
char *_strdup(char *str)
{
	char *copy;
	int index;
	int size;

	size = 0;
	do {
		size++;
	} while (str[size]);
	/* Count all chars in the string, INCLUDING the null byte. */

	copy = malloc(sizeof(char) * size);

	if (copy == NULL)
	{
		return (NULL);
	}
	/* failure */

	index = 0;
	do {
		copy[index] = str[index];

		index++;
	} while (str[index]);
	/* copy string INCLUDING null byte */

	return (copy);
}

