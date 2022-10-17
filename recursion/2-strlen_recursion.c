#include "main.h"

/**
 * _strlen_recursion - calculates length of string
 * @s: pointer to string to be measured
 * Return: length of string at s.
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}

