#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings.
 * @src: string to be appended
 * @dest: starting string
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_end;
	int src_start;

	for (dest_end = 0; dest[dest_end] != '\0';)
	{
		dest_end++;
	}

	for (src_start = 0; src[src_start] != '\0';)
	{
		dest[dest_end] = src[src_start];
		dest_end++;
		src_start++;
	}
	dest[dest_end] = '\0';

	return (dest);
}
