#include "main.h"

/**
 * _strstr - Finds the first occurence of the substring 'needle'
 * in the string 'haystack', NOT COMPARING '\0'.
 *
 * @haystack: string to search in
 * @needle: string to find
 * Return: pointer to the substring inside 'haystack' if found, otherwise 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int h;
	int n;
	int temp_h;
	int all_equal;

	for (h = 0; haystack[h] != '\0'; h++)
	{
		temp_h = h;
		n = 0;

		all_equal = 1;

		while (haystack[temp_h] != '\0' && needle[n] != '\0')
		{
			if (haystack[temp_h] != needle[n])
			{
				all_equal = 0;
				break;
			}

			temp_h++;
			n++;
		}

		if (all_equal)
		{
			return (haystack + h);
		}
	}

	return (0);
}

