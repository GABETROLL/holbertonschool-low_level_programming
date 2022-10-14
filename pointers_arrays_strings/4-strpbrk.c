#include "main.h"

/**
 * _strpbrk - Searches for any byte from *accept inside *s.
 * @s: String to search for *accept bytes
 * @accept: bytes to search in *s.
 * Return: pointer to byte found in s
 */
char *_strpbrk(char *s, char *accept)
{
	int s_index;
	int accept_index;

	for (s_index = 0;; s_index++)
	{
		for (accept_index = 0;; accept_index++)
		{
			if (s[s_index] == accept[accept_index])
			{
				return (s + s_index);
			}

			if (s[s_index] == '\0')
			{
				return (0);
			}

			if (accept[accept_index] == '\0')
			{
				break;
			}
		}
	}
}

