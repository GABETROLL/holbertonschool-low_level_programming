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

	if (str == NULL)
	{
		return (NULL);
	}
	/* edge case */

	for (size = 0; str[size]; size++)
	{
	}
	size++;
	/* Count all chars in the string, INCLUDING the null byte. */

	copy = malloc(sizeof(char) * size);

	if (copy == NULL)
	{
		return (NULL);
	}
	/* failure to allocate memory */

	for (index = size; index >= 0; index--)
	{
		copy[index] = str[index];
	}
	/* copy string INCLUDING null byte */

	return (copy);
}

