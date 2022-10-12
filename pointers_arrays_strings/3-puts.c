#include "main.h"

/**
 * _puts - Outputs string into std output.
 * @str: pointer to string
 * Return: void
 */
void _puts(char *str)
{
	char *pointer = str;

	while (*pointer != '\0')
	{
		_putchar(*pointer);
		pointer++;
	}
	_putchar('\n');
}

