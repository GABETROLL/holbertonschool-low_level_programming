#include "main.h"

/**
 * print_rev - Prints string in reverse.
 * @s: pointer to string
 * Return: void
 */
void print_rev(char *s)
{
	char *pointer = s;

	while (*pointer != '\0')
	{
		pointer++;
	}

	while (pointer != s)
	{
		pointer--;
		_putchar(*pointer);
	}
	_putchar('\n');
}

