#include "main.h"

/**
 * _puts - Outputs string into std output.
 * @str: pointer to string
 * Return: void
 */
void _puts(char *str)
{
	int current = str;

	while (*current != "\0")
	{
		/* '\0' is null, and marks the end of a string. */
		_putchar(*current);
	}
}

