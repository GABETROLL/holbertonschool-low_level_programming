#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest.
 * @dest: start pointer
 * @src: start pointer
 * @n: unsigned amount of bytes to copy.
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}

	return (dest);
}

