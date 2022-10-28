#include <stdlib.h>
#include <string.h>

/**
 * concat_lengths - Calculates the sizes of s1, s2 and the
 * concatenation string of s1 and s2 with
 * the lower function in this file and
 * writes them at s1_size, s2_size, and size.
 *
 * The sizes of s1 and s2 strings are outputed as 0
 * if they are NULL.
 *
 * (the names explain their purpose:)
 * @s1_size: pointer to output int
 * @s2_size: pointer to output int
 * @size: pointer to output int
 * @s1: pointer to string
 * @s2: pointer to string
 * @n: amount of bytes to use from s2
 * (read lower function)
 *
 * Return: void
 */
void concat_lengths(unsigned int *s1_size, unsigned int *s2_size, unsigned int *size,
		char *s1, char *s2, unsigned int n)
{
	/* s1_size */
	if (s1 == NULL)
	{
		*s1_size = 0;
	}
	else
	{
		*s1_size = strlen(s1);
	}

	/* s2_size */
	if (s2 == NULL)
	{
		*s2_size = 0;
	}
	else
	{
		*s2_size = strlen(s2);
	}

	/* concatenation size */
	if (n > *s2_size)
	{
		*size = *s1_size + n + 1;
	}
	else
	{
		*size = *s1_size + *s2_size + 1;
	}
	/* Adding 1 to include the null byte needed below. */
}

/**
 * string_nconcat - Concatenates string s1 left of s2
 * in a new string, and returns a pointer to it.
 *
 * It tries to use s2's first n bytes.
 * If n is greater or equal to s2's length,
 * it uses all of s2 instead.
 *
 * If the string pointers are NULL,
 * they are treated as "".
 *
 * @s1: string pointer
 * @s2: string pointer
 * @n: number of bytes to try to use in s2.
 *
 * Return: new string with s1 and s2's concatenation
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_size;
	unsigned int s2_size;
	unsigned int size;

	char *result;

	unsigned int result_index;
	unsigned int s_index;

	concat_lengths(&s1_size, &s2_size, &size, s1, s2, n);

	result = malloc(size);
	if (result == NULL)
		return (NULL);

	/* copying s1 into left of string, excluding its null byte. */
	s_index = 0;
	for (result_index = 0; result_index < s1_size;)
	{
		result[result_index] = s1[s_index];

		result_index++;
		s_index++;
	}

	/*
	 * copying s2 into right of string,
	 * including its null byte to end the result string.
	 */
	s_index = 0;
	for (; result_index < size;)
	{
		result[result_index] = s2[s_index];

		result_index++;
		s_index++;
	}

	return (result);
}

