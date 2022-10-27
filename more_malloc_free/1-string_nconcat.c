#include <stdlib.h>
#include <string.h>

/**
 * concat_len - Returns the length of strings
 * 's1' and 's2' if they were concatenated together
 *
 * using all of 's1' without the its null byte;
 * and the first 'n' bytes of 's2' if 'n' < strlen(s2),
 * otherwise using strlen(s2).
 *
 * @s1: string pointer
 * @s2: stirng pointer
 * @n: number of bytes to copy from 's2',
 * unless 'n' is bigger than 's2',
 * in which case all bytes are copied
 *
 * Return: length of s1 + s2 INCLUDING NULL BYTE
 */
int concat_len(char *s1, char *s2, unsigned int n)
{
	int result;
	unsigned int new_s2_len;

	result = strlen(s1) + 1;

	new_s2_len = strlen(s2);

	if (n < new_s2_len)
	{
		result += n;
	}
	else
	{
		result += new_s2_len;
	}

	return (result);
}

/**
 * string_nconcat - Creates a new string that is 's1' and
 * the first 'n' bytes of 's2' back-to-back
 * (WITHOUT their null bytes, followed by a null byte),
 * then returns a pointer to it.
 *
 * if n >= strlen(s2), this function just uses
 * the whole 's2' string.
 *
 * @s1: pointer to string that shows first in new string
 * @s2: pointer to string that shows after
 * @n: number of chars to copy from s2
 *
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int new_len;
	unsigned int i;
	unsigned int s2_i;

	new_len = concat_len(s1, s2, n);
	result = malloc(new_len);

	if (result == NULL)
		return (NULL);
	/* Failed to allocate memory. */

	for (i = 0; s1[i]; i++)
	{
		result[i] = s1[i];
	}
	/* copy 's1''s bytes */

	s2_i = 0;
	for (; i < new_len - 1;)
	{
		/*
		 * using i = new_len - 1 in this for loop
		 * would add an extra character,
		 * since new_len counts the null byte at the end
		 * that isn't necessarily at that position in
		 * s2.
		 */
		result[i] = s2[s2_i];

		i++;
		s2_i++;
	}
	/* copy 's2''s bytes */

	result[new_len - 1] = '\0';
	/* Didn't touch this index in for loop. */

	return (result);
}

