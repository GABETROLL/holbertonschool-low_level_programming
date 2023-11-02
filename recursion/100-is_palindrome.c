#include "main.h"

/**
 * compare_chars - Compares chars
 * @c: char located at s.
 * @s: pointer to c
 * @depth: Keeps track of how far recursion needs to go
 * --->to get to the other char.
 * Return: 1 if chars are the same, otherwise 0
 */
int compare_chars(char c, char *s, int depth)
{
	if (depth)
	{
		return (compare_chars(c, s + 1, depth - 1));
	}
	return (*s == c);
}

/**
 * end - Uses recursion to find the end of string s.
 * @s: pointer to string that will be measured
 * Return: char pointer to end of string
 */
char *end(char *s)
{
	if (*s)
	{
		return (end(s + 1));
	}
	return (s);
}

/**
 * _is_palindrome - Uses recursion to check if a string is a palindrome.
 *
 * Uses recursion to:
 * --->find the end of the string. (function 'end')
 * --->find the first and last characters and compare them. ('compare_chars')
 * ------->from the first char, to the char in the middle,
 * ------->using 2 less than the previous depth each time.
 *
 * @s: pointer to string, please use start of string.
 * @depth: keeps track of depth traveled by recursion in function;
 * PLEASE USE 0.
 * Return: 1 if s in a palindrome, otherwise 0
 */
int _is_palindrome(char *s, int depth)
{
	if (!compare_chars(*s, s, depth))
	{
		return (0);
	}
	else if (depth == 0)
	{
		return (1);
	}

	return (_is_palindrome(s + 1, depth - 2));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: string to be checked
 * Return: 1 if s is a palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	return (_is_palindrome(s, 0));
}

