#include "main.h"

/**
 * _strncat - Concatenates to string.
 * @dest: destination, string to be appended to
 * @src: string to be appended
 * @n: number of chars to append from src
 * Return: dest pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_end;
	int src_start;

	for (dest_end = 0; dest[dest_end] != '\0';)
	{
		dest_end++;
	}

	for (src_start = 0; src_start < n && src[src_start] != '\0';)
	{
		dest[dest_end] = src[src_start];

		dest_end++;
		src_start++;
	}

	return (dest);
}

