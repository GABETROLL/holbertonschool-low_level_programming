#include <stdlib.h>
#include <string.h>
/**
 * safe_strlen - Returns the length of s,
 * WITHOUT the first null byte,
 * if s exists.
 * If s is NULL, return 0.
 *
 * @s: string
 * Return: length of s if s is not NULL, 0 otherwise.
 */
int safe_strlen(char *s)
{
	if (s == NULL)
	{
		return (0);
	}
	return (strlen(s));
}

/**
 * str_concat - puts s1, then s2, in a new string
 * (WITHOUT including their nullbytes),
 * followed by a null byte.
 *
 * @s1: string to combine
 * @s2: string to combine
 *
 * Return: pointer to combined string
 */
char *str_concat(char *s1, char *s2)
{
	int s1_size;
	int s2_size;
	char *super_string;
	int s1_index;
	int s2_index;
	int super_string_index;

	s1_size = safe_strlen(s1);
	s2_size = safe_strlen(s2);
	/*
	 * if null is passed instead of a pointer to a stirng,
	 * the string is considered empty.
	 */

	super_string = malloc(sizeof(char) * (s1_size + s2_size + 1));
	/* "+1" to add a null byte at the end of our new string. */

	if (super_string == NULL)
	{
		return (NULL);
	}

	super_string_index = 0;

	for (s1_index = 0; s1_index < s1_size;)
	{
		super_string[super_string_index] = s1[s1_index];

		super_string_index++;
		s1_index++;
	}

	for (s2_index = 0; s2_index < s2_size;)
	{
		super_string[super_string_index] = s2[s2_index];

		super_string_index++;
		s2_index++;
	}

	return (super_string);
}
