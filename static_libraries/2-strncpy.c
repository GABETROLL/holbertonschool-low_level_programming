#include "main.h"

/**
 * _strncpy - Copies string *src's first n chars into *dest.
 * @dest: string to be overriden
 * @src: string to be copied
 * @n: chars to copy from src
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		if (src[index] == '\0')
		{
			for (; index < n; index++)
			{
				dest[index] = '\0';
			}
			break;
		}

		if (dest[index] == '\0')
		{
			break;
		}

		dest[index] = src[index];
	}

	return (dest);
}

