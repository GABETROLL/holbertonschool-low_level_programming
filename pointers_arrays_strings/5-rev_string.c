#include "main.h"

/**
 * rev_string - Reverses string
 * @s: pointer to string to be reversed
 * Returns: void
 */
void rev_string(char *s)
{
	char *left = s;
	char *right = s;

	char right_char;

	while (*right != '\0')
		right++;
	right--;

	while (left < right)
	{
		right_char = *right;
		*right = *left;
		*left = right_char;
	}
}

