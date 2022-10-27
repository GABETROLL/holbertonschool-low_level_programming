#include <stdlib.h>
#include <string.h>

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
	unsigned int new_s2_len = strlen(s2);

	if (n < new_s2_len)
	{
		new_len = n;
	}

	new_len = strlen(s1) + new_s2_len + 1;
	/*
	 * We can't include space for the null chars in 's1' or 's2',
	 * that would cause the new string to end just like 's1'.
	 *
	 * Instead, just we just include one final null byte
	 * at the end, to make both strings visible back-to-back.
	 *
	 * Read the contents of the
	 * 'pointers_arrays_strings' folder if you have any
	 * confusions.
	 */

	result = malloc(new_len);

	if (result == NULL)
	{
		return (NULL);
	}
	/* Failed to allocate memory. */

	for (i = 0; s1[i]; i++)
	{
		result[i] = s1[i];
	}

	s2_i = 0;
	for (; i < new_len;)
	{
		result[i] = s2[s2_i];

		i++;
		s2_i++;
	}

	return (result);
}

