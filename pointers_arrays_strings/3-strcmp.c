#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: string pointer
 * @s2: string pointer
 * Return: 0 if strings are equal, otherwise: greater non-matching char
 */
int _strcmp(char *s1, char *s2)
{
	int index = 0;

	while (s1[index] != '\0' || s2[index] != '\0')
	{
		if (s1[index] != s2[index])
		{
			if (s1[index] > s2[index])
			{
				return (15);
			}
			else
			{
				return (-15);
			}
		}

		index++;
	}

	return (0);
}

