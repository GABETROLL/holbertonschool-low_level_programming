#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: String to be encoded
 * Return: str
 */
char *leet(char *str)
{
	int index;
	char letters[] = "aeotlAEOTL";
	char numbers[] = "4307143071";

	for (index = 0; str[index] != '\0'; index++)
	{
		int letter_index;

		for (letter_index = 0; letters[letter_index] != '\0'; letter_index++)
		{
			if (str[index] == letters[letter_index])
			{
				str[index] = numbers[letter_index];
			}
		}
	}

	return (str);
}

