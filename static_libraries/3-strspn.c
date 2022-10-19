#include "main.h"

/**
 * _strspn - Calculates the length of a prefix substring
 * that only contains chars in *accept.
 *
 * @s: pointer to string to get prefix length in
 * @accept: pointer to chars to search in s
 *
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int s_index;
	unsigned int accept_index;

	s_index = 0;
	while (1)
	{
		accept_index = 0;
		while (1)
		{
			if (s[s_index] == accept[accept_index])
			{
				s_index++;
				break;
			}

			if (s[s_index] == '\0' || accept[accept_index] == '\0')
			{
				return (s_index);
			}

			accept_index++;
		}
	}
}

