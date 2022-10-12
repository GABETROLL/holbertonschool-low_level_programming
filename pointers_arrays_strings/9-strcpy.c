#include "main.h"

/**
 * _strcpy - Copies string pointed to by src to the dest buffer.
 * @dest: destination
 * @src: string to be copied
 * Returns: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int index;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = src[index];

	return (dest);
}

